//Done
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        long long N , K;
        cin>>N>>K;
        long long A[N + 999] = {0};
        long long Check[N + 999] = {0};
        if(K == 0){
            for(long long i = 1;i <= N;i++){
                cout<<i<<" ";
            }
                cout<<endl;
                continue;
        }
        if(((N % 2) != 0) || (K > (N / 2))){
            cout<<"-1"<<endl;
            continue;
        }
        for(long long i = 1;i <= N;i++){
            if((i + K) > N){
                break;
            }
            if(Check[i] == 0){
                A[i + K] = i;
                A[i] = i + K;
                Check[i + K] += 1;
                Check[i] += 1;
            }
        }
        int flag = 0;
        for(long long i = 1;i <= N;i++){
            if(Check[i] != 1){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            for(long long i = 1;i <= N;i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }
        else if(flag == 1){
            cout<<"-1"<<endl;
        }
    }
}