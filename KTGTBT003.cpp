//DONE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        float x;
        cin >>n>>x;
        long long gt = 1;
        float s = 0;
        for (int i = 1; i <= n; i++)
        {
            gt *= x;
            s = sqrt(s + gt);
        }
        cout << fixed << setprecision(3) << s<< endl;
    }
    return 0;
}