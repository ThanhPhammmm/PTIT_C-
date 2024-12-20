//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        long long arr[1000005];
        long long sums = 0;
        long long rs = -INT_MAX;
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        for(int j = 0;j < n;j++){
            sums += arr[j];
            if(sums > rs){
                rs = sums;
            }
            if(sums < 0){
                sums = 0;
            }
        }
        cout<<rs<<'\n';
    }
    return 0;
}