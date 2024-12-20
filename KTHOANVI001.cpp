//DONE
//DONE
#include <iostream>
using namespace std;

int n;
int arr[10000];
int visited[10000] = {0};
void Try(int k){
    for(int i = 1;i <=n ;i++){
        if(visited[i] == 0){
            arr[k] = i;
            visited[i] = 1;
        }
        else continue;
        if(k == n){
            for(int i = 1;i <=n;i++){
                cout<<arr[i]<<(i < n ? " " : "\n");
            }
        }
        if(k < n){
            Try(k + 1);
        }
        visited[i] = 0;
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        Try(1);
    }
    return 0;
}