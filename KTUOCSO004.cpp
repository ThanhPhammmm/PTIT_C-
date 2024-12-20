//Done
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        long long x;
        cin>>x;
        long long n = x;
        long long uoc = 2;
        int flag = true;
        while(n > 1){
            long long dem = 0;
            while(n % uoc == 0){
                dem += 1;
                n /= uoc;
            }
            if(dem > 1){
                flag = false;
                break;
            }
            uoc++;
            if(uoc > sqrt(n)){
                break;
            }
        }
        if(flag == false){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}