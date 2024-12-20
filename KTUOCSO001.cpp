//Done
#include <bits/stdc++.h>
using namespace std;

long long CountDividers(long long n){
    if(n == 1){
        return 0;
    }
    long long rs = 1;
    for(long long i = 2;i * i <= n;i++){
        if(n % i == 0){
            if(i * i != n){//Note
                rs += i + n / i;
            }
            else{
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
        long long n;
        cin>>n;
        cout<<CountDividers(n)<<endl;
    }
    return 0;
}