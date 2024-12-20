//Done
#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9 + 7;
long long tinh(long long base, long long n){
    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        long long tmp = tinh(base, n/2);
        return (tmp * tmp) % MOD;
    }
    else{
        long long tmp = tinh(base, n/2);
        return ((tmp * tmp) % MOD * base) % MOD;
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long a, n;
        cin>>a>>n;
        cout<<tinh(a, n)<<endl;
    }
    return 0;
}