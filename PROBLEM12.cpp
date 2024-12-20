//DONE
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    char *c = &s[s.size() - 1];
    long long arr[1005] = {0};
    int i = 0;
    while(*c){
        arr[i++] = *c -'0';
        c--; 
    }
    int n = 1;
    bool flag = false;
    arr[0] = arr[0] + n;
    for(int j = 0;j < i;j++){
        if(arr[j] >= 10){
            arr[j + 1] = arr[j + 1] + arr[j] / 10;
            arr[j] = arr[j] % 10;
            flag = true;
        }
    }
    if(flag){
        for(int j = i;j >= 0;j--){
            cout<<arr[j];
        } 
    }
    else{
        for(int j = i - 1;j >= 0;j--){
            cout<<arr[j];
        }
    }
    return 0;
}