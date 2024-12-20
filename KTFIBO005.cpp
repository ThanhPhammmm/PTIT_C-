//Done
#include <bits/stdc++.h>
using namespace std;
vector<int> generateFibonacci(int N) {
    vector<int> fibonacci = {1, 2}; // Start with 1, 2 since we don't need 0 here, why?
    int a = 1, b = 2;               //Because if we start with 0, afterward, in a particular time, 0 + (a fibonacci number) will euqual N, possibly.
    while (b <= N) {                //So, follow the process of recursion, that number(a mentioned fibonacci number) will be called,
        int next = a + b;           //and of course, this calculation will equal N which is mentioned initially.
        if (next > N) break;        //So that, there is two-times calling, but we expect one-time calling
        fibonacci.push_back(next);  //For example, N = 13. Start with 0, procesing, until start with 13, 0 + 13 = N = 13 => count += 1
        a = b;                      //Recursion, in turn of 13 which is a fibonacci, 13 = N = 13 => count += 1
        b = next;                   //=> count = 2, wrong
    }                               //we need count = 1(expected)                                  
                                    //cause 0 + 13 = 13 + 0, no need to be calculated twice
    return fibonacci;
}
void countCombinations(const vector<int>& fibonacci, int N, int index, int currentSum, int& count) {
    if(currentSum == N){
        count += 1;
        return;
    }
    if(currentSum > N || index >= fibonacci.size()){
        return;
    }
    countCombinations(fibonacci, N, index + 1, currentSum + fibonacci[index],count);
    countCombinations(fibonacci, N, index + 1, currentSum,count);
}
int main(){
    int T; 
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int> fibonacci = generateFibonacci(N);
        int count = 0;
        countCombinations(fibonacci, N, 0, 0, count);
        cout << count << endl;
    }
    return 0;
}