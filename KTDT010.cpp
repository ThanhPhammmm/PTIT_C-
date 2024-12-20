//Done
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin >> n;
        if (n == 1){
            cout << 1 << endl;
        }
        else if(n < 1){
            cout<< 0 << endl;
        } 
        else{
            cout << 2 * n - 2 << endl;
        }
    }
    return 0;
}