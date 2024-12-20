//Done
#include <bits/stdc++.h>
using namespace std;

int Count_Ways(int n, int m){
    vector<int> power;//save exp of n
    int power_of_m = 1;//n^0
    while(power_of_m <= n){
        power.push_back(power_of_m);
        power_of_m *= m;
    }
    
    vector<int> dp(n + 1,0);//save ways
    dp[0] = 1;// n = 0 => 1 way
    for(int pow : power){
        for(int i = pow;i <= n;i++){//KTTONG004
            dp[i] += dp[i - pow];
        }
    }
    return dp[n];
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n, m;
        cin>>n>>m;
        cout<<Count_Ways(n, m)<<endl;
    }
}