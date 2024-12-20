//Done
#include <bits/stdc++.h>
using namespace std;
long long ProductofDigits(long long N){
    long long rs = 1;
    while(N > 0){
        if(N % 10 == 0){
            return 0;
        }
        rs *= (N % 10);
        N /= 10;
    }
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        long long maxProduct = ProductofDigits(N);
        string tmp = to_string(N);
        int len = tmp.size();
        for(int i = 0;i < len;i++){
            if (tmp[i] == '0') continue;
            string tp = tmp;
            tp[i] -= 1;
            for(int j = i + 1;j < len;j++){
                tp[j] = '9';
            }
            long long newNum = stoll(tp);
            maxProduct = max(maxProduct, ProductofDigits(newNum));
        }
        cout<<maxProduct<<endl;
    }
}
// Note:
// -nho cac ham ben doi nhanh: to_string(), stoll(), 