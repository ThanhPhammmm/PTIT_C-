//Done
#include <bits/stdc++.h>
using namespace std;

string decimalToHex(long long n) {
    if (n == 0) return "0";

    string hex = "";
    char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
                       'A', 'B', 'C', 'D', 'E', 'F'};
    
    while (n > 0) {
        int remainder = n % 16;
        hex = hexChars[remainder] + hex;
        n /= 16;
    }

    return hex;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        cout << decimalToHex(n) << endl;
    }
}