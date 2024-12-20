//Done
#include <bits/stdc++.h>
using namespace std;

int Valid_IP(string s){
    if(s[0] == '0' && s.length() > 1){
        return 0;
    }
    if(s.empty() || s.length() > 3){
        return 0;
    }

    int number = stoi(s);
    return ((number >= 0) && (number <= 255) ? 1 : 0);
}
int Count_Available_IP_Address(string s){
    int length = s.length();
    if(length <= 3){
        return 0;
    }
    int count = 0;
    for(int i = 1;i <= 3;i++){
        for(int j = i + 1;j <= i + 3;j++){
            for(int k = j + 1;(k < length) && (k <= j + 3);k++){
                string sub1 = s.substr(0, i);
                string sub2 = s.substr(i, j - i);
                string sub3 = s.substr(j, k - j);
                string sub4 = s.substr(k, length - k);

                //cout<<sub1<<" "<<sub2<<" "<<sub3<<" "<<sub4<<endl;

                if(Valid_IP(sub1) && Valid_IP(sub2) && Valid_IP(sub3) && Valid_IP(sub4)){
                    count += 1;
                }
            }
        }
    }
    return count;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        cout<<Count_Available_IP_Address(s)<<endl;
    }
}