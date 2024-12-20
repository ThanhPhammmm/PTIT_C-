#include <bits/stdc++.h>
using namespace std;

int sum_of_divisors(int base, int exp){
    base = base % 29;
    exp = exp % (29 - 1);////định lý fermat nhỏ
    int t = 1;
    for(int i = 0;i < exp;i++){
        t = (t * base) % 29; 
    }
    t = t - 1;
    while (t % (base - 1) != 0){
        t += 29;
    }
    ////Khi tính modulo 29, việc thực hiện phép chia trực tiếp không đơn giản vì modulo không hỗ trợ phép chia. 
    // Vì vậy, đoạn mã trên sử dụng vòng lặp để điều chỉnh giá trị t sao cho nó có thể chia hết cho (base - 1), 
    // bằng cách cộng với 29 nhiều lần cho đến khi chia hết cho (base - 1)
    int result = t / (base - 1);
    return result;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int X;
        cin>>X;
        int term1 = sum_of_divisors(2, 2*X + 1);
        int term2 = sum_of_divisors(3, X + 1);
        int term3 = sum_of_divisors(167, X + 1);
        int result = (((term1 * term2)%29)*term3)%29;
        cout<<result<<endl;
    }
}
// Note:
// - 2004 = 2^2 * 3 * 167 => 2004^X = (2^(2*X) + 3^X +167^X)
// => Tổng các ước số là :(1 + 2 + 2^2 + ... + 2^X + 2(2*X)) * (1 + 3 + 3^2 + ... + 3^X) * (1 + 167 + 167^2 + ... + 167^X)
// (chỉ dùng cho trường hợp số N phân tích thành tích của các số nguyên tố)
// => Dạng theo công thức cấp số nhân là: 
// (1 * ((2^(2*X +1))-1)/(2 - 1)) * (1 * ((3^(X + 1))-1)/(3 - 1)) * ((1 * (167^(X + 1))-1)/(167 - 1))
// - ví dụ định lý Fermat nhỏ: exp = 1000, base^1000 MOD 29 = base^(1000 MOD (exp - 1)) MOD 29