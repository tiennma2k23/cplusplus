#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1,mod=1e9+7;
ll t[maxn];
int main()
{
    ll n,M,k;
    t[0]=1;
    cin>>n>>M>>k;
    for (ll i=1;i<=n;i++) t[i]=(t[i-1]*M)%mod;
    ll tmp1=((n-k+1)*t[n-k+1])%mod;
    ll tmp2=0;
    for (ll x=k+1;x<=n;x++)
    {
        tmp2+=t[n-x+1];
        tmp2%=mod;
    }
    tmp2=(tmp2*(n-k))%mod;
    ll ans=(tmp1-tmp2+mod)%mod;
    cout<<ans<<endl;
}
