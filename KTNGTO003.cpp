//Done
#include <bits/stdc++.h>
using namespace  std;

bool check(long long n){
    if(n == 0 || n == 1){
        return 0;
    }
    if(n == 2 || n == 3){
        return 1;
    }
    for(int i = 3;i <= sqrt(n);i += 2){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        long long tmp = n;
        while(1){
            if(tmp % 2 != 0){
                if(check(tmp) == 1 && check(tmp - 2) == 1){//NOTE
                    cout<<tmp<<endl;
                    break;
                }
            }
            tmp++;
        }
    }
}
// Note:
// + Ta nhận thấy là nếu n và (n - 2) là số nguyên tố thì n là tổng của 2 số nguyên tố trong những số nguyên tố trước nó.