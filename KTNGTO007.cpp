//Done
#include <bits/stdc++.h>
using namespace std;

long long MaxPrimeFactor(long long n){
    long long rs = 0;
    while(n % 2 == 0){
        rs = 2;
        n /= 2;
    }
    for(int i = 3;i <= sqrt(n);i += 2){//i +=2 or i +=2 is all right
        while(n % i == 0){
            rs = i;
            n /= i;
        }
    }
    if(n > 2){
        rs = n;
    }
    return rs;
}
long long FindMaxPrimeFactor(long long L, long long R){
    long long rs = 0;
    long long tmp = MaxPrimeFactor(L);
    for(long long i = L;i <= R;i++){
        long long current = MaxPrimeFactor(i);
        if(current > tmp){
            rs = i;
            tmp = current;
        }
    }
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long L, R;
        cin>>L>>R;
        cout<<FindMaxPrimeFactor(L, R)<<endl;
    }
}