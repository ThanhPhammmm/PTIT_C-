//Done
#include <bits/stdc++.h>
using namespace std;

int MinstepstoZero(long long N){
    queue<pair<int,int>> q;
    set<int> visited;
    q.push({N,0});
    visited.insert(N);
    while(!q.empty()){
        auto current = q.front().first;
        auto steps = q.front().second;
        q.pop();
        if(current == 0){
            return steps;
        }
        if((current % 2 == 0) && !visited.count(current/2)){
            q.push({current / 2, steps + 1});
            visited.insert(current / 2);
        }
        if((current % 3 == 0) && !visited.count(current/3)){
            q.push({current / 3, steps + 1});
            visited.insert(current / 3);
        }
        int tmp = sqrt(current);
        if((tmp * tmp) == current && !visited.count(tmp)){
            q.push({tmp, steps + 1});
            visited.insert(tmp);
        }
        if((current - 1 >= 0) && !visited.count(current - 1)){
            q.push({current - 1, steps + 1});
            visited.insert(current - 1);
        }
    }
    return -1;
}
int main(){ 
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        cout<<MinstepstoZero(N)<<endl;
    }
}