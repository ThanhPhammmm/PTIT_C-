//Done
#include <bits/stdc++.h>
using namespace std;

long long Find_Max_Difference_Between_0_And_1(string N){
    long long MaxSum = 0;
    long long CurrSum = 0;
    long long val = 0;
    bool flag_zero = false;
    for(char c : N){
        val = (c == '0' ? 1 : -1);
        if(c == '0'){
            flag_zero = true;
        }
        CurrSum += val;
        MaxSum = max(MaxSum, CurrSum);

        if(CurrSum < 0){
            CurrSum = 0;
        }
    }
    if(flag_zero == false){
        return -1;
    }
    return MaxSum;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string N;
        cin>>N;
        cout<<Find_Max_Difference_Between_0_And_1(N)<<endl;
    }
    return 0;
}