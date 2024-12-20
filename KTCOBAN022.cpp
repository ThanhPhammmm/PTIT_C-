//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long X, Y, M;
        cin>>X>>Y>>M;
        int so_vo_hop = M / X;
        int rs = so_vo_hop;
        while(so_vo_hop >= Y){
            rs += 1;
            so_vo_hop = so_vo_hop - Y + 1;
        }
        cout<<rs<<endl;
    }
}