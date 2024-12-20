//Done
#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long Power_Number(long long base, long long exp){
    long long rs = 1;
    while(exp > 0){
        if(exp % 2 == 1){
            rs = rs * base % MOD;
        }
        base = base * base % MOD;
        exp /= 2;
    }
    return rs;
}
long long Change_to_LongLong_Form_Of_Base(string number){
    long long result = 0;
    for(char c : number){
        result = ((result * 10) + (c - '0')) % MOD;
    }
    return result;
}
long long Change_to_LongLong_Form_Of_Exp(string number){
    long long result = 0;
    for(char c : number){
        result = ((result * 10) + (c - '0')) % (MOD - 1);
    }
    return result;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string a;
        string b;
        cin>>a>>b;
        long long base = Change_to_LongLong_Form_Of_Base(a);
        long long exp = Change_to_LongLong_Form_Of_Exp(b);
        long long rs = Power_Number(base, exp);
        cout<<rs<<endl;
    }   
    return 0;
}