//Done
#include <bits/stdc++.h>
using namespace std;

int Count_Ways(int m, int n){
    vector<int> power;
    int base = 1;
    while(pow(base, n) <= m){
        power.push_back(pow(base, n));
        base += 1;
    }

    vector<int> dp(m + 1, 0);
    dp[0] = 1;//1 way to perfomr the number 0

    for(int pow : power){
        for(int i = m;i >= pow;i--){//KT_006
            dp[i] += dp[i - pow];
        }
    }
    return dp[m];
}
int main() {
    int T;
    cin>>T;
    while(T--){
        int m, n;
        cin>>m>>n;
        cout<<Count_Ways(m ,n)<<endl;
    }
}