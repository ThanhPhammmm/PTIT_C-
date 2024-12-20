#include <bits/stdc++.h>
using namespace std;

long long Solve(long long N, long long K){
    long long dp[K + 1][N + 1];
    for(int i = 0; i <= N;i ++){
        dp[1][i] = 1;
    }
    for(int i = 2;i <= K;i++){
        for(int j = 0;j <= N;j++){
            long long sum = 0;
            for(int k = 0;k <= j;k++){
                sum += dp[i - 1][k];
            }
            dp[i][j] = sum;
        }
    }
    return dp[K][N];
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N, K;
        cin>>N>>K;
        cout<<Solve(N, K)<<endl;
    }
    return 0;
}
// Note:
// - dp[i][j]: số cách để biểu diễn j thành tổng của i số tự nhiên lớn hơn 0.
// - dp[1][j]: cách duy nhất để biểu diễn j là chính j.
// - dp[i > 0][j]: cộng tất cả các cách biểu diễn của các bài toán con.
//     Nghĩa là : dp[i][j] = tổng của các dp[i - 1][x], x <= j, j <= N, i <= K.
