//Done
#include <bits/stdc++.h>
using namespace std;

int maxPathSum(vector<vector<int>> &A, int m, int n){
    vector<vector<int>> dp(m, vector<int>(n, 0));
    for(int i = 0;i < m;i++){
        dp[i][0] = A[i][0];
    }
    for(int i = 1;i < n;i++){
        for(int j = 0;j < m;j++){
            dp[j][i] = dp[j][i - 1] + A[j][i];
            if(j > 0){
                dp[j][i] = max(dp[j][i], dp[j - 1][i - 1] + A[j][i]);
            }
            if(j < m - 1){
                dp[j][i] = max(dp[j][i], dp[j + 1][i - 1] + A[j][i]);
            }
        }
    }
    int maxSum = dp[0][n - 1];
    for(int i = 1;i < m;i++){
        maxSum = max(maxSum, dp[i][n - 1]);
    }
    return maxSum;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int m, n;
        cin>>m>>n;
        vector<vector<int>> A(m, vector<int>(n));
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                cin>>A[i][j];
            }
        }
        cout<<maxPathSum(A, m, n)<<endl;
    }
}