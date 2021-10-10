#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=1e5+1;
II p[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,t,ans=0;
    cin>>n>>t;
    for (ll i=1;i<=n;i++) cin>>p[i].fi>>p[i].se;
    sort(p+1,p+1+n);
    for (ll i=1;i<=n;i++)
    {
        ll tmp=min(t/p[i].fi,p[i].se);
        ans+=tmp;
        t-=tmp*p[i].fi;
    }
    cout<<ans<<endl;
}
