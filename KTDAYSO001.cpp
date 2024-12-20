//Done
#include <bits/stdc++.h>
using namespace std;

bool Checkout(long long arr[], long long N){
    int d = arr[1] - arr[0];
    for(int i = 2;i < N;i++){
        if((arr[i] - arr[i - 1]) != d){
            return 0;
        }
    }
    return 1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        long long arr[N + 1];
        for(int i = 0;i < N;i++){
            cin>>arr[i];
        }
        if(Checkout(arr, N)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
