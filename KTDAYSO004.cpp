//Done
#include <bits/stdc++.h>
using namespace std;

int longestIncreasingSubsequence(vector<long long> arr){
    vector<long long> dp(arr.size(), 1);
    long long max_length = 1;
    for(int i = 1;i < arr.size();i++){
        for(int j = 0;j < i;j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        max_length = max(max_length, dp[i]);
    }
    return max_length;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        cout<<longestIncreasingSubsequence(arr)<<endl;
    }
}