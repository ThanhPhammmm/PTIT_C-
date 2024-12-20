//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string a, b, s;
        cin>>a>>b>>s;
        if(s[1] == '?'){
            if(s[2] == '?' || (s[2] >= '0' && s[2] <= '3')){
                s[1] = '2';
            }
            else{
                s[1] = '1';
            }
        }
        if(s[2] == '?'){
            if(s[1] == '1' || s[1] == '0'){
                s[2] = '9';
            }
            else{
                s[2] = '3';
            }
        }
        if(s[4] == '?'){
            s[4] = '5';
        }
        if(s[5] == '?'){
            s[5] = '9';
        }
        for(int i = 0;i < s.length();i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}