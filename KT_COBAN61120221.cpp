//Done
#include <bits/stdc++.h>
using namespace std;

long long Calculate(long long base, long long k){
    long long rs = 1;
    while(k > 0){
        if(k % 2 == 1){
            rs = rs * base % 123456789;
        }
        base = base * base % 123456789;
        k /= 2;
    }
    // if(k == 1){
    //     return base;
    // }
    // long long tmp = Calculate(base, k / 2);
    // if(k % 2 == 0){
    //     return (tmp * tmp) % 123456789;
    // }
    // else{
    //     return (tmp * tmp) % 123456789 * base % 123456789;
    // }
    return rs;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        cout<<Calculate(2, n - 1)<<endl;
    }
}