//Done
#include <bits/stdc++.h>
using namespace std;

int So_chinh_phuong(int n){
    if(pow(sqrt(n), 2) == n){
        return 1;
    }
    return 0;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int k;
        cin>>k;
        if(k % 2 == 1){
            cout<<1;
            for(int i = 1;i < k;i++){
                cout<<0;
            }
            cout<<endl;
            continue;
        }
        long long base = sqrt(pow(10, k - 1)) + 1;
        int flag = 0;
        while((base * base) < pow(10, k)){
            long long number = base * base;
            while(number > 0){
                if(So_chinh_phuong(number % 10) == 1){
                    number /= 10;
                }
                else{
                    break;
                }
            }
            if(number == 0){
                flag = 1;
                cout<<base * base<<endl;
                break;
            }
            base += 1;
        }
        if(flag == 0){
            cout<<-1<<endl;
        }
    }
}