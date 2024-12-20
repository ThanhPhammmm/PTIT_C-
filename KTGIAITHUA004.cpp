#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll c ( ll n ,ll k , ll m){
	if(k>n-k){
		k = n-k;
	}
	ll c[k+1];
	memset(c,0,sizeof(c));
	c[0]=1;
	for(ll i = 1; i<=n; i++){
		for(ll j = min(i,k);j>0;j--){
			c[j]=(c[j]+c[j-1])%m;
		}
	}
	return c[k];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n,k,m;
		cin >> n >> k >> m;
		cout << c(n,k,m) << endl;
	}
	return 0;
}