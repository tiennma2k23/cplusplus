#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    //freopen("bits.inp","r",stdin);
   // freopen("BITS.ans","w",stdout);
    ll n,a[10001],ans=0;
    ll aa=100,b=100;
    ll aaa=aa&b;
    cout<<aaa<<endl;
        cin>>n;
        for (ll i=1;i<=n;i++) cin>>a[i];
        for (ll i=1;i<=n;i++)
            for (ll j=i+1;j<=n;j++) ans+=(a[i]|a[j])^(a[j]&a[i]);
        cout<<ans<<endl;

}
