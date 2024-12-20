//Done
#include <bits/stdc++.h>
using namespace std;

long long MAXN = 5 * (1e5);
vector<int> biggest_factor(MAXN + 1, 0);

void Eratosthenes(void){
    for(int i = 2;i <= MAXN;i++){
        if(biggest_factor[i] == 0){
            for(int j = i;j <= MAXN;j += i){//NOTE
                biggest_factor[j] = i;
            }
        }
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Eratosthenes();
        long long rs = 0;
        long long N;
        cin>>N;
        for(int i = 2;i <= N;i++){
            rs += biggest_factor[i];
        }
        cout<<rs<<endl;
    }
    return 0;
}

// Note:
// - Ước của bội của số nguyên tố bất kì là số nguyên tố đấy.