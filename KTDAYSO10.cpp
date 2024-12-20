//Done
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, a;
        long long sum = 0;
        cin >> n >> l;
        for(int i = 1;i <= (n - 1);++i) cin >> a, sum += a;
        long long ans = l * n + pow(n, 2) / 2 - n / 2;
        ans -= sum;
        cout << ans << '\n';
    }
    return 0;
}