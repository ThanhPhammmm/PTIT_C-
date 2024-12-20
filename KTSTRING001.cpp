//DONE
#include <bits/stdc++.h>
using namespace std;

int Checkout(string child, string parent){
    long long lenofchild = child.length();
    long long lenofparent = parent.length(); 
    if(child.empty() && parent.empty()){
        return 0;
    }
    if(parent.empty() || (lenofchild > lenofparent)) {
        return -1;
    }
    for(int i = 0;i <= (lenofparent - lenofchild);i++){
        int rs = 0; 
        for(int j = 0;j < lenofchild;j++){
            if(parent[i + j] != child[j]){
                break;
            }   
            else{
                rs += 1;
            }
        }
        if(rs == lenofchild){
            return i;
        }
    }
    return -1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string child, parent, a, b;
        cin>>a>>b>>child>>a>>b>>parent;
        child.pop_back();
        child.pop_back();
        child.erase(child.begin());
        parent.pop_back();
        parent.erase(parent.begin());
        cout<<Checkout(child, parent)<<endl;
    }
    return 0;
}