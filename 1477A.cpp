
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
ll a[maxn];
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        for (ll i=1;i<=n;i++) cin>>a[i];
        ll g=0;
        for (ll i=2;i<=n;i++) g=__gcd(g,abs(a[i]-a[i-1]));
        if ((k-a[1])%g) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
