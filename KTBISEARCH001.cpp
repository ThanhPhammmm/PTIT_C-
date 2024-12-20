//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin>>n>>m;
    long long a[n], b[m];
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    for(int j = 0;j < m;j++){
        cin>>b[j];
    }
    for(int k = 0;k < m;k++){
        long long tmp = 0;
        while(tmp < n){
            if(b[k] == a[tmp]){
                cout<<(tmp + 1)<<" ";
                break;
            }
            tmp++;
        }
        if(tmp == n){
            cout<<0<<" ";
        }
    }
}