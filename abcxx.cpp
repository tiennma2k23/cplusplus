#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   ll t;
   cin >> t;
   while(t --)
   {
       ll n,k;
       cin>>n>>k;
       k=n-k;
       ll p=n-2*k-1;
       for (ll i=1;i<=p;i++) cout<<i<<" ";
       for (ll i=n-k;i>p;i--) cout<<i<<" ";
       cout<<endl;
   }
}
