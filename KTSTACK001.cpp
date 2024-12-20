//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        stack<char> tmp;
        for(int i = 0;i < s.length();i++){
            if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
                tmp.push(s[i]);
            }
            else if(s[i] == ']'){
                if(tmp.top() == '['){
                    tmp.pop();
                }
            }
            else if(s[i] == '}'){
                if(tmp.top() == '{'){
                    tmp.pop();
                }
            }
            else if(s[i] == ')'){
                if(tmp.top() == '('){
                    tmp.pop();
                }
            }
        }
        if(tmp.size() > 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}