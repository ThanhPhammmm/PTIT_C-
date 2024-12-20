//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long K, S;
        cin>>K>>S;
        long long Z = 0;
        int rs = 0;
        for(int X = 0;X <= K;X++){
            for(int Y = 0;Y <= K;Y++){
                Z = S - X - Y;
                if((Z >= 0) && (Z <= K)){
                    rs += 1;
                }
            }
        }
        cout<<rs<<endl;
    }
    return 0;
}