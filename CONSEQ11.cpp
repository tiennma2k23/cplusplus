#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e6+1,mod=1e9+7;
ll a[maxn];
map<ll,ll> d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,i;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=n;i>=1;i--)
    {
        d[a[i]]=(d[a[i]]+1+d[a[i]+1])%mod;
    }
    cout<<d[1]<<'\n';
}
