//Done
#include <bits/stdc++.h>
using namespace std;
string NumberToBinary(long long n){
    string rs = "";
    while(n > 0){
        rs = to_string(n % 2) + rs;
        n /= 2;
    }
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        cout<<NumberToBinary(n)<<endl;
    }
}