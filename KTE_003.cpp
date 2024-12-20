//Done
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        long long so_nguyen_to[100] = {0};
        long long so_mu[100] = {0};
        long long divider = 2;
        long long dem = 0;
        long long index = 1;
        long long tmp = -1;
        if(n % divider == 0){
            while(n % divider == 0){
                dem += 1;
                n /= divider;
            }
            so_nguyen_to[index] = divider;
            so_mu[index] = dem;
            tmp = max(tmp, dem);
        }
        for(int i = 3;i <= sqrt(n);i+=2){
            dem = 0;
            if(n % i == 0){
                index += 1;
                while(n % i == 0){
                    dem += 1;
                    n /= i;
            	}
            so_nguyen_to[index] = i;
            so_mu[index] = dem;
            tmp = max(tmp ,dem);
            }
        }
        if(n != 1){
            index += 1;
            so_nguyen_to[index] = n;
            so_mu[index] = 1;
            tmp = max(tmp, so_mu[index]);
        }
        for(int i = 1;i <= index;i++){
            if(so_mu[i] == tmp){
                cout<<so_nguyen_to[i]<<" "<<so_mu[i]<<endl;
                break;
            }
        }
    }
}