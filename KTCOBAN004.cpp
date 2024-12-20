//Done
#include <iostream>
#include <cmath>
using namespace std;
void SoDoiXung(int k){
    int half = (k + 1) / 2;
    long long rs = 9 * pow(10, half - 1);
    cout<<rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int k;
        cin>>k;
        SoDoiXung(k);
        cout<<endl;
    }
    return 0;
}
// Note:
// - Tim so doi xung voi so co le chu so: 1, 3, 5, ...=> xet (k+1)/2 chu so, roi lam phep tinh 9 * pow(10,(k+1)/2 - 1)
// vd: 100 -> 999 co 101,111,121,131,141,151,161,171,181,191 => co 10 so, ma so 1 chay toi so 9 => 10*9=90
// - Tim so doi xung voi so co chan chu so: 2, 4, 6, ...=> xet (k+1)/2 chu so, roi lam phep tinh 9 * pow(10,(k+1)/2 - 1)
// vd: 1000 -> 9999 co 1001,1111,1221,1331,1441,1551,1661,1771,1881,1991 => co 10 so, ma so 1 chay toi so 9 => 10*9=90
// - Quy luat chung la 9 * pow(10,(k+1)/2 - 1).
