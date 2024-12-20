//Done
#include <bits/stdc++.h>
using namespace std;
bool CheckNgTo(long long n){
    if(n == 1 || n == 0){
        return 0;
    }
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        long long sum  = 0;
        for(long long i = 2;i <= n;i++){
            if((n % i == 0) && CheckNgTo(i)){
                sum += 1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}