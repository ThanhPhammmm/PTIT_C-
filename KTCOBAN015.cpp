//Done//(9/10)
#include <iostream>
using namespace std;
int arr[20] = {0};
int n,k;

int C(int k, int n){
    if(k == 0 || k == n){
        return 1;
    }
    if(k == 1){
        return n;
    }
    return C(k - 1, n - 1) + C(k, n - 1);
}
void Xuat(){
    cout<<"[";
    for(int i = 1;i<=k;i++){
        cout<<arr[i];
        if(i != k){
            cout<<" ";
        }
    }
    cout<<"]";
    cout<<endl;
}
void Dequy(int i){
    for(int j = arr[i - 1] + 1;j <= (n - k + i);j++){//Note
        arr[i] = j;
        if(i == k){
            Xuat();
        }
        else{
            Dequy(i + 1);
        }
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        cin>>n>>k;
        cout<<C(k,n);
        cout<<endl;
        Dequy(1);
    }
}

// Note:
// - Dung dinh luat Pascal, to hop chon, co bao nhieu cach  chon k tu n phan tu: C(k,n) = C(k-1,n-1) + C(k,n-1).
// - Dung de quy de tim kha nang cac so Xi co the dat duoc.