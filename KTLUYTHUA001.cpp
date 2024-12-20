//Done
#include <bits/stdc++.h>
using namespace std;

string Mul(string number1, string number2){
    vector<int> buffer(number1.size() + number2.size(), 0);
    for(int i = number1.size() - 1;i >= 0;i--){
        for(int j = number2.size() - 1;j >= 0;j--){
            int mul = (number1[i] - '0') * (number2[j] - '0');
            int tmp = mul + buffer[i + j + 1];

            buffer[i + j + 1] = tmp % 10;
            buffer[i + j] += tmp / 10;
        }
    }
    string rs = "";
    for(int num : buffer){
        if(num == 0){
            if(rs.empty()){
                continue;
            }
            else{
                rs += to_string(num);
            }
        }
        else{
            rs += to_string(num);
        }
    }
    return rs;
}
string Calculation(long long base, long long exp){
    string result = "1";
    for(int i = 0;i < exp;i++){
        string tmp = to_string(base);
        result = Mul(result, tmp);
    }
    return result;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long a, n;
        cin>>a>>n;
        if(a == 0){
            cout<<0<<endl;
            continue;
        }
        cout<<Calculation(a, n)<<endl;
    }
    return 0;
}