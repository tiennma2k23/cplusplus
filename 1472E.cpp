#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define IIl pair<II,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=2e5+1;
IIl v[maxn];
void solve()
{
    ll n;
        cin>>n;
        vector<II> m(n + 1, II(1e9, 0));
        vector<ll> ans(n + 1), pre(n + 1, 0);
        for (ll i=1; i<=n; i++)
        {
            cin>>v[i].fi.fi>>v[i].fi.se;
            if (v[i].fi.fi>v[i].fi.se) swap(v[i].fi.fi,v[i].fi.se);
            v[i].se=i;
        }
        sort(v+1,v+1+n);
        for (ll i=1; i<=n; i++)
        {
            m[i]=min(m[i-1],II(v[i].fi.se,i));
            if (v[i].fi.fi==v[i-1].fi.fi) pre[i]=pre[i-1];
            else pre[i]=i-1;
            ll pos=pre[i];
            if(v[i].fi.se > m[pos].fi) ans[v[i].se] = v[m[pos].se].se;
            else ans[v[i].se] = -1;
        }
        for (ll i=1; i<=n; i++) cout<<ans[i]<<" ";
        cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
