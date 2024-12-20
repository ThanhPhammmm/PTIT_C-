//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long l, r;
        cin>>l>>r;
        long long n = (r - l) + 1;
        cout<<((r + l) * n) / 2<<endl;
    }
    return 0;
}