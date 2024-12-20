//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a, b;
        cin>>a>>b;
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        int count[10] = {0};
        for(int i = a;i <= b;i++){
            string s = to_string(i);
            for(int j = 0;j < s.length();j++){
                count[s[j] - '0']++;
            }
        }
        for(int k = 0;k < 10;k++){
            cout<<count[k];
            if(k != 9){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}