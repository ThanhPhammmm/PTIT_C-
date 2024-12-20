//Done
#include <bits/stdc++.h>
using namespace std;

unsigned long long Change_Into_Real_Number(unsigned long long length, string s){
    unsigned long long number = 0;
    for(unsigned long long i = 0;i < length;i++){
        if(s[i] == '1'){
            number |= 1 << (length - 1 - i);
        }
    }
    return number;
}
unsigned long long Count_Binary_Sequences(unsigned long long n, string s1, string s2){
    unsigned long long number1 = Change_Into_Real_Number(n, s1);
    unsigned long long number2 = Change_Into_Real_Number(n, s2);
    if(number1 == number2){
        return 0;
    }
    return (number1 > number2 ? (number1 - number2 - 1) : (number2 - number1 - 1)); 
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        unsigned long long n;
        string x, y;
        cin>>n>>x>>y;
        unsigned long long result = Count_Binary_Sequences(n, x, y);
        cout<<result<<endl;
    }
}
// NOTE:
// - Sử dụng unsigned long long để có thể cung cấp bộ nhớ đủ để chứa được chuỗi nhị phân đủ dài