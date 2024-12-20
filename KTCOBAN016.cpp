//Done
#include <iostream>
using namespace std;

void LonHon9(long long n, bool condition){
    if(n > 9){
        cout<<"123456790";
        LonHon9(n - 9, 0);
        cout<<"098765432";
        if(condition){
            cout<<"1";
        }
    }
    else{
        if(n == 1){
            return;
        }
        else{
            for(int i = 1; i <= n;i++){
                cout<<i;
            }
            for(int j = n - 1;j >= 2;j--){
                cout<<j;
            }
        }
        return;
    }
}
void NhoHon9(long long n){
    for(int i = 1;i <= n;i++){
        cout<<i;
    }
    for(int j = n - 1;j >= 1;j--){
        cout<<j;
    }
}
int main(){
    int test;
	cin >> test;
	while (test--)
	{
		long long n;
		cin >> n;
        if(n <= 9){
            NhoHon9(n);
        }
        else{
            LonHon9(n,1);
        }
		cout << endl;
	}
	return 0;
}