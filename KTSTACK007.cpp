//Done
#include <bits/stdc++.h>
using namespace std;

int minReversal(string s){
    int balance = 0;
    int steps_reversal = 0;
    for(char c : s){
        if(c == '('){
            balance++;
        }
        else{
            if(balance == 0){//dấu ')' khởi đầu chuỗi, vì trước đấy không có dấu nào để 'đóng' lại cả, nên BẮT BUỘC phải đổi sang '('
                steps_reversal++;
                balance++; //giả sử đổi dấu ')' thành '(', thì balance sẽ + 1
            }
            else{
                balance--;
            }
        }
    }
    steps_reversal += balance / 2; // số lượng '(' thừa, 2 dấu thì sẽ +1 cách đổi chiều
    return steps_reversal;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        cout<<minReversal(s)<<endl;
    }
}