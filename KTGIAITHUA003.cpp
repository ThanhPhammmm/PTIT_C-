//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        long long rs = 0;
        // for(long long i = 5;i <= N;i += 5){
        //     long long tmp = i;
        //     while((tmp % 5) == 0){
        //         rs +=1;
        //         tmp /= 5;
        //     }
        // }
        // cout<<rs<<endl;
        int i = 1;
        while(pow(5,i) < N){
            rs += N/pow(5,i);
            i++;
        }
        cout<<rs<<endl;
    }
}
// Note:
// - Ta có công thức: f(n) = XichMa(từ i = 1 đến k)(n/(5 mũ i)) = [n/5] + [n/5^2] + [n/5^3] + ... + [n/5^k], chạy đến khi [n/5^k] = 0, hay (5^k > n)