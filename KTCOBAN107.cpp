//Done
#include <iostream>
#include <vector>
using namespace std;

int MOD = 1e9 + 7;

vector<vector<long long>> matMul(vector<vector<long long>> &A, vector<vector<long long>> &B, int N){
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
vector<vector<long long>> matPow(vector<vector<long long>> &A, long long K, int N){
    vector<vector<long long>> result(N, vector<long long>(N, 0));
    for(int i = 0;i < N;i++){
        result[i][i] = 1;
    }

    while(K > 0){
        if(K % 2 == 1){
            result = matMul(result, A, N);
        }
        A = matMul(A, A, N);
        K /= 2;
    }
    return result;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int N; 
        long long K;
        cin>>N>>K;
        vector<vector<long long>> A(N, vector<long long>(N));
        for(int i = 0;i < N;i++){
            for(int j = 0;j < N;j++){
                cin>>A[i][j];
            }
        }
        vector<vector<long long>> result = matPow(A, K, N);

        for(int i = 0;i < N;i++){
            for(int j = 0;j < N;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
