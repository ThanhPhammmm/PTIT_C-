//Done
#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;  // ^ có ưu tiên cao nhất
    return 0;
}
bool isOperand(char ch) {
    return ch >= 'a' && ch <= 'z'; // Ký tự từ 'a' đến 'z'
}
string InfixToPostFix(string s){
    string rs = "";
    stack<char>tmp;
    for(char c : s){
        if(isOperand(c)){
            rs += c;
        }
        else if(c == '('){
            tmp.push(c);
        }
        else if(c == ')'){
            while(tmp.top() != '('){
                rs += tmp.top();
                tmp.pop();
            }
            tmp.pop();      
        }
        else{
            while(!tmp.empty() && precedence(tmp.top()) >= precedence(c)){
                rs += tmp.top();
                tmp.pop();
            }
            tmp.push(c);
        }
    }
    while(!tmp.empty()){
        rs += tmp.top();
        tmp.pop();
    }
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        cout<<InfixToPostFix(s)<<endl;
    }
}