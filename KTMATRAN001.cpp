//Done
#include <bits/stdc++.h>
using namespace std;

int maxPathSum(vector<vector<long long>> &A, int m, int n){
    vector<vector<long long>> dp(m, vector<long long>(n, 0));
    for(int i = 0;i < n;i++){
        dp[0][i] = A[0][i];
    }
    for(int i = 1;i < m;i++){
        for(int j = 0;j < n;j++){
            dp[i][j] = dp[i - 1][j] + A[i][j];
            if(j > 0){
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + A[i][j]);
            }
            if(j < n - 1){
                dp[i][j] = max(dp[i][j], dp[i - 1][j + 1] + A[i][j]);
            }
        }
    }
    long long maxSum = dp[m - 1][0];
    for(int i = 1;i < n;i++){
        maxSum = max(maxSum, dp[m - 1][i]);
    }
    return maxSum;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int m, n;
        cin>>m>>n;
        vector<vector<long long>> A(m, vector<long long>(n));
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                cin>>A[i][j];
            }
        }
        cout<<maxPathSum(A, m, n)<<endl;
    }
}