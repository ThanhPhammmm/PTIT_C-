//Done
#include <bits/stdc++.h>
using namespace std;

long long countGroups(string &s, int start, int prevSum) {
    int n = s.size();
    if (start == n){
        return 1;
    }
    int currentSum = 0;
    long long ways = 0;
    for(int i = start;i < n;i++){
        currentSum += s[i] - '0';
        if(currentSum >= prevSum){
            ways += countGroups(s, i + 1, currentSum);
        }
    }
    return ways;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string digits;
        cin >> N >> digits;
        cout << countGroups(digits, 0, 0) << endl;
    }
    return 0;
}
