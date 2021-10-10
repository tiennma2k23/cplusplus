#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100001];
int main()
{
       // freopen("bits.inp","r",stdin);
   // freopen("BITS.out","w",stdout);
    ll q;
    //cin>>q;
    //while (q--)
    //{
        ll n;
        ll ans=0;
        cin>>n;
        for (ll i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+1+n);
        for (ll i=1;i<=n;i++) ans+=(a[i]&a[i])*(n-i);
        cout<<ans<<endl;
   // }
}
