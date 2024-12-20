//Done
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<string> rs;
        for(int i = 0;i < n;i++){
            string tmp;
            cin>>tmp;
            rs.push_back(tmp);
        }
        sort(rs.begin(), rs.end(), greater<string>());
        for(int i = 0;i < n;i++){
            cout<<rs[i];
        }
        cout<<endl;
    }
    return 0;
}
// Note:
// - hàm greater<type>(), sắp xếp tăng dần
// - so sánh theo ký tự đầu tiên trong 'string' => chữ số giảm dần từ trái qua phải