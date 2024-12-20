//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long n, p;
        cin>>n>>p;
        int exp = 1;
        int rs = 0;
        while(n / pow(p,exp)){
            rs += n / pow(p,exp);
            exp++;
        }
        cout<<rs<<endl;
    }
}

// Note:
// Để tìm số mũ lớn nhất x sao cho p^x là ước của n!
// - số mũ x = [n/p] + [n/p^2] + [n/p^3] + ...
// - Ý tưởng : 
// + Số lần xuất hiện của p như một ước của các số trong khoảng từ 1 đến n được tính bằng cách lấy phần nguyên của n chia cho p(đó là 
// số các bội của p trong khoảng 1 đến n )
// + Sau đó, với mỗi p^k, chúng ta cộng số các bội của p^k trong khoảng từ 1 đến n.
// + Tiếp túc cho đến khi p^k > n;