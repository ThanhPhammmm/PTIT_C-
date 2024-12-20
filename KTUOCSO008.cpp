//Done
#include <bits/stdc++.h>
using namespace std;
#define int long long

void factorize(int n, int divider, vector<int> &factor, int &count, bool print){
    if(n==1 && factor.size() > 1){
        if(print){
            for(int i = 0;i < factor.size();i++){
                cout<<factor[i]<<" ";
            }
            cout<<endl;
        }
        count++;
        return;
    }
    for(int i = divider;i <= n;i++){
        if(n % i == 0){
            factor.push_back(i);
            factorize(n / i, i, factor, count, print);
            factor.pop_back();
        }
    }
}
void implement(){
    int n;
    cin>>n;
    vector<int>factor;
    int count = 0;
    factorize(n, 2, factor, count, false);//count
    cout<<count<<endl;
    count = 0;
    factorize(n, 2, factor, count, true);//print
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        implement();
    }
    return 0;
}