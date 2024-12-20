//Done
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long  L, R;
        cin>>L>>R;
        if(L > R){
            long long temp;
            temp = L;
            L = R;
            R = temp;
        }
        long long rs;
        if(int(sqrt(L)) * int(sqrt(L)) == L){
            rs = (int)sqrt(R) - (int)sqrt(L) + 1;//1
        }
        else{
            rs = (int)sqrt(R) - (int)sqrt(L);//2

        }
        cout<<rs<<endl;
    }
}

// Note:
// - Chu y //1, //2