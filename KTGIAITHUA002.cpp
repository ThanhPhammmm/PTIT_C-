//DONE
#include <bits/stdc++.h>
using namespace std;

long long Checkout(long long tmp){
    long long rs = 0;
    // Divide by increasing powers of 5
    for (long long factor = 5; tmp / factor > 0; factor *= 5) {
        rs += tmp / factor;
    }
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        long long low = 0;
        long long high = 5 * N + 5;
        while(low < high){
            long long mid = (low + high) >> 1;
            if(Checkout(mid) < N){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        cout<<low<<endl;
    }
    return 0;
}