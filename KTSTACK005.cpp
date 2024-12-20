//Done
#include <bits/stdc++.h>
using namespace std;

string PrefixtoPostfix(string prefix){
    stack<string> tmp;
    for(int i = prefix.size() - 1;i >= 0;i--){
        char op = prefix[i];
        if(op == '+' || op == '-' || op == '*' || op == '/'){
            string tmp1 = tmp.top();
            tmp.pop();
            string tmp2 = tmp.top();
            tmp.pop();
            string rs = tmp1 + tmp2 + op;
            tmp.push(rs);
        }
        else{
            string s = "";
            s += op;
            tmp.push(s);
        }
    }
    return tmp.top();
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string prefix;
        cin>>prefix;
        string postfix = PrefixtoPostfix(prefix);
        cout<<postfix<<endl;
    }
}