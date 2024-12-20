//Done
#include <bits/stdc++.h>
using namespace std;

long long Prime_number[500];
long long c = 0;
bool visited[500] = {0};
long long Current_sequence[500] = {0};
long long P, N, S;
bool flag = 0;

bool checknt(int n){
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
void Print()
{
    flag = 1;
    for(int i = 1;i <= N;i++){
        cout<<Prime_number[Current_sequence[i]]<<" ";
    }
    cout << '\n';
}
void Try(int k, long long sum){
    if(k == (N + 1)){
        if(sum == S){
            Print();
            return;
        }
        else{
            return;
        }
    }
    for(int i = Current_sequence[k - 1];i < c;i++){
        if(visited[i] == 0){
            if(sum + Prime_number[i] <= S){
                visited[i] = 1;
                Current_sequence[k] = i;
                Try(k + 1,sum + Prime_number[i]);
                visited[i] = 0;
            }
        }
    }
}
int main(){
    cin>>P>>N>>S;
    for(int i = P + 1;i <= S;i++){
        if(checknt(i) == 1){
            Prime_number[c++] = i;
        }
    }
    Try(1, 0);
    if(flag == 0){
        cout<<-1;
    }
    return 0;
}