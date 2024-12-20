//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long l, r;
        cin>>l>>r;
        if(l % 2 == 0){ //1
            l++;
        }
        if(r % 2 == 0){ //2
            r--;
        }
        long long n = (r - l) / 2 + 1;
        cout<<((r + l) * n) / 2<<endl;
    }
    return 0;
}
// Note:
// - Giả sử dãy cần tính tổng là (2,3,4,5,6) => dãy lẻ là (3,5) => nếu số đầu dãy là chắn, thì cần lấy số kế tiếp, và lấy số trước nếu số cuối dãy là chắn
// - Giả sử dãy cần tính tổng là (2,3,4,5) => dãy lẻ là (3,5) => nếu số đầu dãy là chắn, thì cần lấy số kế tiếp
// - Giả sử dãy cần tính tổng là (3,4,5,6) => dãy lẻ là (3,5)=> lấy số trước nếu số cuối dãy là chắn