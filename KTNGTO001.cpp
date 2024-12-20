//DONE
#include <bits/stdc++.h>
using namespace std;

bool check2(int n){
    while(n > 0){
        int tmp = n % 10;
        if(tmp != 2 && tmp != 3 && tmp!= 5 & tmp != 7){
            return 0;
        }
        n /= 10;
    }
    return 1;
}
bool check1(int n){
    if(n <= 1){
        return 0;
    }
    if(n <= 3){
        return 1;
    }
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int dem = 0;
        for (int i = 2; i <= n; i++)
        {
            if (check1(i) && check2(i))
                dem++;
        }
        cout << dem << endl;
    }
    return 0;
}

// Note:
// - Cach khac de xet so nguyen to: for(int i = 2;i * i <= n;i++)