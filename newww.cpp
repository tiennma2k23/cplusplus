
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		for(i=n;;i++){
			ll x=i;
			while(x){
				if(x%10==0||i%(x%10)==0)
					x/=10;
				else break;
			}
			if(!x)break;
		}
		cout<<i<<"\n";
	}
}
