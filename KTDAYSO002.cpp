//Done
#include <bits/stdc++.h>
using namespace std;

void CountSubSets(int index, int N, int K, int S, vector<int> &A, int count, int currentSum, int &result){
    if(count == K){
        if(currentSum == S){
            result++;
        }
        return;
    }
    if(index >= A.size() || count == K){
        return;
    }
    CountSubSets(index + 1, N, K, S, A, count + 1, currentSum + A[index], result);
    CountSubSets(index + 1, N, K, S, A, count, currentSum, result);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int N, K, S;
        cin>>N>>K>>S;
        vector<int> A(N);
        for(int i = 0;i < N;i++){
            cin>>A[i];
        }
        int result = 0;
        CountSubSets(0, N, K, S, A, 0, 0, result);
        cout<<result<<endl;
    }
}
