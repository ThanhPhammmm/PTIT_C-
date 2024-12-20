//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        long long rs = 0;
        long long base = 1;
        for(int i = s.size() - 1;i >= 0;i--){
            if(s[i] == '1'){
                rs += base;
            }
            base = base << 1;
        }
        cout<<rs<<endl;
    }
}