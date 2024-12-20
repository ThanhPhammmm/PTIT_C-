//Done
#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9 + 7;
vector<vector<long long>> MulMat(vector<vector<long long>> A, vector<vector<long long>> B, int N){
    vector<vector<long long>> C(N, vector<long long>(N, 0));
    for(int i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            for(int k = 0;k < N;k++){
                C[i][j] = (C[i][j] + (A[i][k] * B[k][j])) % MOD;
            }
        }
    }
    return C;
}
long long Calculation(vector<vector<long long>> &A, int N, int K){
    vector<vector<long long>> result(N, vector<long long>(N, 0));
    for(long long i = 0;i < N;i++){
        result[i][i] = 1;
    }
    while(K > 0){
        if(K % 2 == 1){
            result = MulMat(result, A, N);
        }
        A = MulMat(A, A, N);
        K /= 2;
    }
    long long sum = 0;
    for(int i = 0;i < N;i++){
        sum = (sum + result[i][N - i - 1]) % MOD;
    }
    return sum;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N, K;
        cin>>N>>K;
        vector<vector<long long>> A(N, vector<long long>(N, 0));
        for(long long i = 0;i < N;i++){
            for(long long j = 0;j < N;j++){
                cin>>A[i][j];
            }
        }
        cout<<Calculation(A, N, K)<<endl;
    }

}