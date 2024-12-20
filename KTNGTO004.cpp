//Done
#include <bits/stdc++.h>
using namespace std;

long long Largest_prime_factor(int N){
    long long rs = 0;
    while(N % 2 == 0){
        rs = 2;
        N /= 2;
    }
    for(int i = 3;i * i <= N;i+=2){
        while(N % i == 0){
            rs = i;
            N /= i;
        }
    }
    if(N > 1){
        return N;
    }
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        cout<<Largest_prime_factor(N)<<endl;
    }
    return 0;
}
// Note:
// - Phân tích một số thành các số nguyên tố: 2, 3, 5, ....