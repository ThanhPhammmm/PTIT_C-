//Done
#include <bits/stdc++.h>
using namespace std;

long long MAXN = 1e5;

vector<long long> Biggest_factor(MAXN + 1, 0);
void Eratosthenes(void){
    for(int i = 2;i <= MAXN;i++){
        if(Biggest_factor[i] == 0){
            for(int j = i;j <= MAXN;j += i){
                Biggest_factor[j] = i;
            }
        }
    }
}
int main(){
    int T;
    cin>>T;
    Eratosthenes();
    while(T--){
        int N;
        cin>>N;
        for(int i = N; i >= 2;i--){
            if(Biggest_factor[i] > sqrt(N)){
                cout<<i;
                break;
            }
        }
        cout<<endl;
    }
}