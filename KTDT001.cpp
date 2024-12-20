//DONE
#include <bits/stdc++.h>
using namespace std;

long long countWays(long long N){
    long long count = 0;
    for(long long k = 2;(((k - 1) * k) / 2) < N;k++){
        long long num = N - (((k - 1) * k) / 2);
        if(num % k == 0){
            count++;
        }
    }
    return count;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        cout<<countWays(N)<<endl;
    }
}
// Note:
// - số N có tổng bằng tổng của dãy số liên tiếp có dạng: N = x + (x + 1) + (x + 2) + (x + 3) + .. + (x + k - 1).
// - công thức tổng của dãy này là: N = kx + (((k - 1)*k) / 2), k là số số hạng.
// => kx = N - (((k - 1)*k) / 2) => x = N - (((k - 1)*k) / 2) / k
// => vì x là số tự nhiên => x > 0 => N > (((k - 1)*k) / 2) / k => vì k > 0(vì k là số hạng) => N > (((k - 1)*k) / 2)(điều kiện k)
// => (((k - 1)*k) / 2) chi hết cho k (Điều kiện)
// Tìm x => tìm số bắt đầu của dãy liên tiếp