//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int> buff;
        double sum = 0;
        for(int i = 1;ceil(sum) <= N;i++){
            sum += log10(i);
            if(ceil(sum) == N){
                buff.push_back(i);
            }
        }
        if(buff.empty()){
            cout<<"NO"<<endl;
        }
        else{         
            cout<<buff.size()<<" ";
            for(int i = 0;i < buff.size();i++){
                cout<<buff[i];
                if(i != buff.size()){
                    cout<<" ";
                }
            }
            cout<<endl;

        }    
    }
    return 0;
}
//Note: log10(N!) là số chữ số của N!, lưu ý, log10(N!) làm tròn lên mới ra đươc số chứ số của N!
//      số chữ số của N! = log10(N!) = log10(1) + log10(2) + log10(3) + ... + log10(N);
//		ceil(N), làm tròn N lên, ví dụ : 0.1 -> 1