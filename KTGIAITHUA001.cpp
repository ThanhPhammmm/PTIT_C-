//Done
#include <bits/stdc++.h>
using namespace std;

vector<char> PhepNhan(vector<char> temp, vector<char> trs){
    vector<int>tmp(temp.size() + trs.size(), 0);
    for(int i = 0;i < temp.size();i++){
        for(int j = 0;j < trs.size();j++){
            tmp[i + j] += (temp[i] -'0') * (trs[j] - '0');
            if(tmp[i + j] >= 10){
                tmp[i + j + 1] += tmp[i + j] / 10;
                tmp[i + j] = tmp[i + j] % 10;

            }
        }
    }
    while((!tmp.empty()) && (tmp.back() == 0)){
        tmp.pop_back();
    }
    vector<char>final_result;
    for(int k = 0;k < tmp.size();k++){
        final_result.push_back(tmp[k] + '0');
    }
    return final_result;
}
vector<vector<char>> rs(10009);

void TinhGiaiThua(){
    rs[0] = {'1'};
    for(int i = 1;i <= 10000;i++){
        vector<char> temp;
        int j = i;
        while(j > 0){
            temp.push_back((j % 10) + '0');
            j /= 10; 
        }
        rs[i] = PhepNhan(temp, rs[i - 1]);
    }
}
int main(){
    TinhGiaiThua();
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        for(int i = rs[n].size() - 1;i >= 0;i--){
            cout<<rs[n][i];
        }
        cout<<endl;
    }
    return 0;
}

//5/10
#include <bits/stdc++.h>
using namespace std;

string Mul(string number1, string number2){
    vector<long long> buffer(number1.size() + number2.size(), 0);
    for(long long i = number1.size() - 1;i >= 0;i--){
        for(long long j = number2.size() - 1;j >= 0;j--){
            long long mul = (number1[i] - '0') * (number2[j] - '0');
            long long tmp = mul + buffer[i + j + 1];

            buffer[i + j + 1] = tmp % 10;
            buffer[i + j] += tmp / 10;
        }
    }
    string rs = "";
    for(long long num : buffer){
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
string Factorize(long long n){
    string rs = "1";
    for(long long i = 2;i <= n;i++){
        string number = to_string(i);
        rs = Mul(rs, number);
    }
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long a;
        cin>>a;
        if(a == 0){
            cout<<1<<endl;
            continue;
        }
        cout<<Factorize(a)<<endl;
    }
    return 0;
}