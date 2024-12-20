//Done
#include <bits/stdc++.h>
using namespace std;

void convert_into_3_base(string &s){
    for(int i = 0;i < s.length();i++){
        if(s[i] == '5'){
            s[i] = '3';
        }
    }
}
void convert_into_5_base(string &s){
    for(int i = 0;i < s.length();i++){
        if(s[i] == '3'){
            s[i] = '5';
        }
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string num1, num2;
        cin>>num1>>num2;
        convert_into_3_base(num1);
        convert_into_3_base(num2);
        cout<<(long long)(stoll(num1) + stoll(num2))<<" ";
        convert_into_5_base(num1);
        convert_into_5_base(num2);
        cout<<(long long)(stoll(num1) + stoll(num2));
        cout<<endl;
    }
}