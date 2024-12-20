//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string n;
        cin>>n;
        if(n[0] == '-'){
            cout<<n.length() - 1;
        }
        else{
            cout<<n.length();
        }
        cout<<endl;
    }
}
