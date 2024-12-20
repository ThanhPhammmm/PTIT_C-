//DONE
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        float x;
        cin>>n;
        cin>>x;
        float S = 0.0;
        long long T = 1;
        float Xk = 1.0;
        for(int i = 1;i <= n;i++){
            Xk *= x;
            T *= i;
            S += Xk / T;
        }
        cout<<fixed<<setprecision(3)<<S<<endl;
    }
}