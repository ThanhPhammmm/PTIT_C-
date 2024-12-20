//Done
#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        int k, m;
        cin>>n>>k>>m;
        double tmp = k * log10(n);
        double phan_thap_phan = tmp - (long long)tmp;
        double rs = pow(10, phan_thap_phan);
        double final = rs * pow(10,m - 1);
        cout<<(long long)final<<endl;
    }
}
// Note:
// Một giá trị logarithm 10 của (n mũ k), từ đó ta có thể suy ra:
// - Phần nguyên của giá trị logarithm này cho biết số chữ số của (n mũ k)
// - Phần thập phân của giá trị logarithm này cho ta các chữ số đầu tiên của của (n mũ k)
// - Tach gia tri cua log 10 của (n mũ k) ra thành (phần nguyên) + (phần thập phân)
// - Phần nguyên của logarithm cho biết số chữ số của (n mũ k)
// - Phần thập phân là thông tin cần thiết để tính các chữ số đầu tiên của (n mũ k). Phần thập phân này đại diện cho vị trí 
// của các chữ số đầu tiên khi ta lấy (10 mũ phần thập phân);
// - Sau đó, để lấy m chữ số đầu tiên, ta có thể nhân thêm với (10 mũ (m - 1))