//Done
#include <bits/stdc++.h>
using namespace std;

int FindSteps(int N){
    int tmp;
    int so_duong = 0;
    int so_am = 0;
    int so_0 = 0;
    for(int i = 0;i < N;i++){
        cin>>tmp;
        if(tmp > 0){
            so_duong += 1;
        }     
        else if(tmp < 0){
            so_am += 1;
        }
        else if(tmp == 0){
            so_0 += 1;
        }
    }
    if(so_0 > 0){
        return -1;
    }
    else if(so_duong == N || so_am == N){
        return 0;
    }
    else if(so_duong >= so_am){
        return so_am;
    }
    else if(so_am >= so_duong){
        return so_duong;
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int result = FindSteps(N);
        cout<<result<<endl;
    }
}