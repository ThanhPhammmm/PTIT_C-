//Done
#include <bits/stdc++.h>
using namespace std;
long long MaxN = 1e18;

set<long long> GenerateFibonacci(long long MaxN){
    set<long long> tmp;
    long long fib1 = 0;
    long long fib2 = 1;
    tmp.insert(fib1);
    tmp.insert(fib2);
    while(1){
        long long fib3 = fib1 + fib2;
        if(fib3 > MaxN){
            break;
        }
        tmp.insert(fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
    return tmp;
}
int main(){
    int T;
    cin>>T;
    set<long long> fib = GenerateFibonacci(MaxN);
    while(T--){
        int n;
        cin>>n;
        long long current_number = n + 1;
        int current_count = 0;
        while(1){
            if(fib.find(current_number) == fib.end()){
                cout<<current_number<<endl;
                break;
            }
            current_number += 1;
        }
    }
    return 0;
}