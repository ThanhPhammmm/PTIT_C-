//Done
#include <bits/stdc++.h>
using namespace std;

string Multiply(string num1, string num2){

    long long length = num1.size() + num2.size();
    vector<long long> result(length, 0);
    for(long long i = num1.size() - 1;i >= 0;i--){
        for(long long j = num2.size() - 1;j >= 0;j--){
            long long mul = (num2[j] - '0') * (num1[i] - '0');
            long long tmp = mul + result[i + j + 1];

            result[i + j + 1] = tmp % 10;
            result[i + j] += tmp / 10;
        }
    }
    string product = "";
    for(long long num : result){
        if(!(num == 0 && product.empty())){

            product += to_string(num);
        }
    }
    return product;
}
string Factorize(long long n){
    string rs = "1";
    for(long long i = 2;i <= n;i++){
        string number = to_string(i);
        rs = Multiply(rs, number);
    }
    return rs;
}
string Pow_of_two(long long n){
    string rs = "1";
    for(long long i = 0;i < n;i++){
        string num2 = to_string(2);
        rs = Multiply(rs, num2);
    }
    return rs;
}
string Calculate(long long n){
    string s1 = Factorize(n);
    string s2 = Pow_of_two(n);
    string rs = Multiply(s1, s2);
    return rs;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        cout<<Calculate(n)<<endl;
    }
    return 0;
}