//Done
#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long Luy_Thu_du(long long a, long long n){
    long long rs = 1;
    while(n > 0){
        if(n % 2 == 1){
            rs = a * rs % MOD;
        }
        a = a * a % MOD;
        n /= 2;
    }
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long a, n;
        cin>>a>>n;
        cout<<Luy_Thu_du(a, n)<<endl;
    }
}