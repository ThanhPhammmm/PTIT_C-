//Done
#include <bits/stdc++.h>
using namespace std;

long long SumOfFactors(long long n, long long m){
    if(n == 1){
        return 0;
    }
    if(m % n == 0){
        return 0;
    }
    long long rs = n;
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            if(i * i != n){
                if(m % i != 0){
                    rs += i;
                }
                if(m % (n / i) != 0){
                    rs += (n / i);
                }
            }
            else if(m % i != 0){
                rs += i;
            }
        }
    }
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n, m;
        cin>>n>>m;
        cout<<SumOfFactors(n, m)<<endl;
    }
}