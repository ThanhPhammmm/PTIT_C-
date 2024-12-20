#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

long long solve(long long N){
    long long dp[100] = {0};
    dp[0] = 1;
    for(int i = 1;i <= N;i++){
        for(int j = i;j <= N;j++){
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        }
    }
    return (dp[N] % MOD) - 1;
}
int main() {
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        cout<<solve(N)<<endl;
    }
    return 0;
}
// Note:
// - dp[i]: lưu số cách biểu diễn số i
// - hệ thức truy hồi: dp[i] = dp[i] + dp[i - j], i<=N, i0 = j;