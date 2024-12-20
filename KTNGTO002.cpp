//Done
#include <bits/stdc++.h>
using namespace std;

vector<long long> Prime_Number(1e6, 1);

void Eratosthenes(long long limit){
    Prime_Number[0] = 0;
    Prime_Number[1] = 0;
    for(int i = 2;i * i <= limit;i++){
        if(Prime_Number[i] == 1){
            for(int j = i * i;j <= limit;j += i){//NOTE
                Prime_Number[j] = 0;
            }
        }
    }
}
int main(){
    Eratosthenes(1e6);
    int T;
    cin>>T;
    while(T--){
        int L, R;
        cin>>L>>R;
        long long result = 0;
        for(int i = L;i <= R;i++){
            if(Prime_Number[i]){
                result += 1;
            }
        }
        cout<<result<<endl;
    }
}