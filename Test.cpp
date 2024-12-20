#include <bits/stdc++.h>
using namespace std;

int Check_doi_xung(long long n){
    string s = to_string(n);
    int l = 0;
    int r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]){
            return 0;
        }
        else{
            l++;
            r--;
        }
    }
    return 1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        long long temp = n;
        for(long long i = n,j = temp; ;i++,j--){
            if(Check_doi_xung(i) == 1 && Check_doi_xung(j) == 1){
                if(i != j){
                    cout<<j<<" "<<i<<endl;
                }
                else{
                    cout<<i<<endl;
                }
                break;
            }
            else if(Check_doi_xung(i) == 1 && Check_doi_xung(j) == 0){
                cout<<i<<endl;
                break;
            }
            else if(Check_doi_xung(i) == 0 && Check_doi_xung(j) == 1){
                cout<<j<<endl;
                break;
            }
        }
    }
}