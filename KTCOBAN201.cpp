#include <bits/stdc++.h>
using namespace std;

bool check2(string s){
    //ThanhPham26
    for(int i = 0;i <= s.length() - 1;i++){
        if(s[i] == s[i - 1]){
            return 0;
        }
    }
    return 1;
}
bool check1(string s){
    int temp[4] = {0};
    for(int i = 0;i < s.length();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            temp[1]++;
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            temp[2]++;
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            temp[3]++;
        }
        if(ispunct(s[i])){
            temp[4]++;
        }
    }
    for(int j = 0;j < 4;j++){
        if(temp[j] == 0){
            return 0;
        }
    }
    return 1;

}
bool Solve(string s){
    if((s.length() >= 8) && check1(s) && check2(s)){
        return 1;
    }
    return 0;
}
int main(){
    ifstream ip("password.in");
    ofstream op("res.out");
    string s;
    while (ip >> s)
    {
        if (Solve(s))
        {
            op << "VALID" << endl;
        }
        else
            op << "INVALID" << endl;
    }
    return 0;
}