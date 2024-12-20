#include <bits/stdc++.h>
using namespace std;

int LCS(string A, string B){
    int arr[A.length() + 1][B.length() + 1];
    for(int i = 0;i <= A.length();i++){
        for(int j = 0;j <= B.length();j++){
            if(i == 0 || j == 0){
                arr[i][j] = 0;
            }
            else if(A[i - 1] == B[j - 1]){
                arr[i][j] = arr[i - 1][j - 1] + 1;
            }
            else if(A[i - 1] != B[j - 1]){
                arr[i][j] = max(arr[i][j - 1], arr[i - 1][j]);
            }
        }
    }
    return arr[A.length()][B.length()];
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string A,B;
        cin>>A>>B;
        cout<<A.length() + B.length() - LCS(A, B)<<endl;
    }
}
// Note:
// - SCS(A,B)=length(A)+length(B)−LCS(A,B);
// - LCS (Longest Common Subsequence)
// - SCS (Shortest Common Supersequence)