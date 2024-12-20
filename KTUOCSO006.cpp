//DOne
#include <bits/stdc++.h>
using namespace std;

long long SumOfFactors(long long n){
    long long rs = 0;
    for(int i = 1;i <= sqrt(n);i++){
        if(n % i == 0){
            rs += i + (n / i);
        }
    }
    return rs - n;//the subtraction here helps to calculate the proper result, cause when calculating the sum of factors
                  //of the number n, it includes n also, so we need to subtract it
                  //Requirement is that we just need to calculate the sum of factors, which are less than 
                  //the number mentioned initially, of n
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long a, b;
        cin>>a>>b;
        if(SumOfFactors(a) == b && SumOfFactors(b) == a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}