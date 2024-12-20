//Done
#include <bits/stdc++.h>
using namespace std;

int n, m;
int Path[500][500];// Cost of traveling from city 𝑖 to city 𝑗.
int cmin = INT_MAX;//Minimum cost of any road (used for pruning).
int current_Order_of_city[500];//The 𝑘-th city in the current path.
bool visited[500] = {0};
int temporary_distance = 0;
int result = INT_MAX;

void Try(int k){
    for(int i = 2;i <= n;i++){
        if(Path[current_Order_of_city[k - 1]][i] != INT_MAX && visited[i] == 0){// Check if there is a valid path
            visited[i] = 1;
            current_Order_of_city[k] = i;
            temporary_distance += Path[current_Order_of_city[k - 1]][i];
            if(k == n){
                if(Path[current_Order_of_city[n]][1] != INT_MAX)
                // Ensure that there is a valid path back to the start (city 1)
                result = min(result, temporary_distance + Path[current_Order_of_city[n]][1]);
            }
            else if(temporary_distance + (n - k + 1) * cmin <= result){
                Try(k + 1);
            }
            visited[i] = 0;
            temporary_distance -= Path[current_Order_of_city[k - 1]][current_Order_of_city[k]];
        }
    }
}
int main(){
    cin>>n>>m;
    int i, j, c;
    for(int x = 1;x <= n;x++){
        for(int y = 1;y <= n;y++){
            Path[x][y] = (x == y ? 0 : INT_MAX);
        }
    }
    for(int x = 1;x <= m;x++){
        cin>>i>>j>>c;
        Path[i][j] = c;
        cmin = min(cmin, c);
    }
    current_Order_of_city[1] = 1;
    visited[1] = 1;
    Try(2);//Begin with city2
    cout<<result;
}