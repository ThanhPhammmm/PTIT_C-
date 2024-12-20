//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        long long tmp = n;
        long long s[10005] = {0};
        long long exp[10005] = {0};
        int t = 0;
        if(tmp % 2 == 0){
            t += 1;
            while(tmp % 2 == 0){
                exp[t] = exp[t] + 1;
                s[t] = 2;
                tmp /= 2;
            }
        }
        for(int i = 3;i <= sqrt(tmp);i += 2){
            if(tmp % i == 0){
                t += 1;
                while(tmp % i == 0){
                    exp[t] = exp[t] + 1;
                    s[t] = i;
                    tmp /= i;
                }
            }
        }
        if(tmp != 1){
            t++;
            exp[t] = 1;
            s[t] = tmp;
        }
        cout<<t<<endl;
        for(int i = 1;i <= t;i++){
            cout<<s[i]<<" "<<exp[i]<<endl;;
        }
    }
    return 0;
}