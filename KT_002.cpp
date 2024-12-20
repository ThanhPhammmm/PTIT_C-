//DONE
#include <bits/stdc++.h>
using namespace std;

int maxPathSum(vector<vector<int>> &A, int startX, int startY){
    int m = A.size();
    int n = A[0].size();

    vector<vector<int>> dp(m, vector<int>(n, 99999));
    dp[startX][startY] = A[startX][startY];

    for(int i = startY + 1;i < n;i++){
        for(int j = 0;j < m;j++){
            if(dp[j][i - 1] != 99999){
                dp[j][i] = min(dp[j][i], dp[j][i - 1] + A[j][i]);
            }
            if(j < (m - 1) && dp[j + 1][i - 1] != 99999){
                dp[j][i] = min(dp[j][i], dp[j + 1][i - 1] + A[j][i]);
            }
            if(j > 0 && dp[j - 1][i - 1] != 99999){
                dp[j][i] = min(dp[j][i], dp[j - 1][i - 1] + A[j][i]);
            }
        }
    }
    int maxSum = dp[0][n - 1];
    for(int i = 1;i < m;i++){
        maxSum = min(maxSum, dp[i][n - 1]);
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
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        cout<<maxPathSum(A, x, y)<<endl;
    }
}