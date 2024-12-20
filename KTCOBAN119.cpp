//Done
#include <bits/stdc++.h>
using namespace std;

int CountZeros(int number){
    int count = 0;
    while(number > 0){
        if(number % 2 == 0){
            count +=1;
        }
        number /= 2;
    }
    return count;
}
int main() {
    int T;
    cin>>T;
    while(T--){
        int N, K;
        cin>>N>>K;
        int rs = 0;
        for(int i = 0;i <= N;i++){
            if(CountZeros(i) == K){
                rs += 1;
            }
        }
        cout<<rs<<endl;
    }
    return 0;
}
