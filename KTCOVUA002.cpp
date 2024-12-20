#include<iostream>
using namespace std;
int a[100],cot[100],d1[100],d2[100],n,cnt=0;
void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]==0&&d1[i-j+n]==0&&d2[i+j-1]==0){
			a[i]=j;
			cot[j]=1;
			d1[i-j+n]=1;
			d2[i+j-1]=1;
			if(i==n){
			cnt++;
			}else{
				Try(i+1);
			}
			cot[j]=0;
			d1[i-j+n]=0;
			d2[i+j-1]=0;
		}
	}
}
int main(){
   int t;cin>>t;
   while(t--){
   	cin>>n;
	Try(1);
	cout<<cnt<<endl;
   }
}
