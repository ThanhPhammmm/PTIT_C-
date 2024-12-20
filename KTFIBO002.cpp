//Done
#include <iostream>
#include <set>
using namespace std;

set<long long> generateFibonacci(long long maxVal) {
    set<long long> fib;
    long long a = 0, b = 1;
    fib.insert(a);
    fib.insert(b);
    while (true) {
        long long c = a + b;
        if (c > maxVal) break;
        if(c % 2 == 0){
            fib.insert(c);
        }
        a = b;
        b = c;
    }
    return fib;
}

int main() {
    long long maxN = 1000000000; 
    int t;
    cin >> t; 
    set<long long> fib = generateFibonacci(maxN);

    while (t--) {
        long long N;
        cin >> N;
        long long sum = 0;
        for(long long tmp : fib){
            if(tmp % 2 == 0 && tmp <= N){
                sum += tmp;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}
