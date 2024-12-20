//Done
#include <bits/stdc++.h>
using namespace std;

long long Expose3(int i, int n){
    int result = 1;
    while(n--){
        result *= i;
    }
    return result;
}
bool Check_Amstrong(long long n){
    long long temp1 = n;
    int cnt = 0;
    while(temp1>0){
        cnt += 1;
        temp1/=10;
    }
    long long rs = 0;
    long long temp2 = n;
    while(temp2>0){
        int i = temp2%10;
        rs += Expose3(i,cnt);
        temp2/=10;
    }
    if(rs == n){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        cout<<Check_Amstrong(n)<<endl;
    }
}