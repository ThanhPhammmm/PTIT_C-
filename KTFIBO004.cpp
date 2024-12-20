//Done
#include <bits/stdc++.h>
using namespace std;

long long const MaxN = 1e12;
long long arr[1000000];
void GenerateFibonacci(long long const MaxN){
    arr[0] = 0;
    arr[1] = 1;
    long long fib1 = 0;
    long long fib2 = 1;
    int i = 2;
    while(1){
        long long fib3 = fib1 + fib2;
        if(fib3 > MaxN){
            break;
        }
        arr[i] = fib3;
        fib1 = fib2;
        fib2 = fib3;
        i++;
    }
}

int main(){
    int T;
    cin>>T;
    GenerateFibonacci(MaxN);
    while(T--){
        int N;
        cin>>N;
        int dem = 0;
        for(int i = 0;i < N;i++){
            for(int j = N;j >= 0;j--){
                if((arr[i] + arr[j]) == N){
                    dem +=1;
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    break;
                }
            }
            if(dem == 1){
                break;
            }
        }
        if(dem == 0){
            cout<<"-1"<<endl;
        }
    }
}