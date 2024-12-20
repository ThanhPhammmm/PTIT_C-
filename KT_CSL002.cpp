//DONE
#include <bits/stdc++.h>
using namespace std;

string addLargeNumbers(string num1, string num2){
    if(num2.size() > num1.size()){
        swap(num1, num2);
    }
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    string result;
    int carry = 0;

    for(size_t i = 0;i < num1.size();i++){
        int sum = (num1[i] - '0') + ((i < num2.size()) ? (num2[i] - '0') : 0) + carry;
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if(carry){
        result.push_back(carry +'0');
    }
    reverse(result.begin(), result.end());
    return result;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        string sum = addLargeNumbers(s, "2022");
        cout<<sum<<endl;
    }
}