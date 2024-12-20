//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        map<int,int> mp;
        int N;
        cin>>N;
        long long arr[N + 1] = {0};
        for(int i = 0;i < N;i++){
            cin>>arr[i];
            mp[arr[i]] +=1;
        }
        int rs = 0;
        for(int i = 0;i < N;i++){
            if(mp[arr[i]] == 1){
                rs += 1;
            }
        }
        cout<<rs<<endl;
    }
}
// Note:
// - map<type, type> name