//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long arr[32] = {0};
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 1;i<=30;i++){
        for(int j = 0;j<=i;j++){
            arr[i + 1] += (arr[j] * arr[i - j]); 
        }
    }
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
}