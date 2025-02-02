#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sbd(int n, int k){
    if (n < k) return 0;
    if (k == 1) return 1;
    ll cnt = n - 1;
    for (int i = 2; i <= k - 1; ++i){
        cnt *= n - i;
        cnt /= i;
    }
    return cnt;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        cout << sbd(n, k) << endl;
    }
    return 0;
}