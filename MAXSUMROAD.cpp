#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+5,mod=1e9+7;
ll f[maxn],u[maxn],v[maxn],c[maxn],n;
vector <ll> gr[maxn],cnt;
void dfs(ll u, ll p)
{
    f[u]=1;
    for (auto v:gr[u])
    {
        if (v==p) continue;
        dfs(v,u);
        f[u]+=f[v];
        cnt.push_back(f[v]*(n-f[v]));
    }
}
bool cmp (ll a, ll b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for (ll i=1;i<n;i++)
    {
        cin>>u[i]>>v[i];
        gr[u[i]].push_back(v[i]);
        gr[v[i]].push_back(u[i]);
        c[i]=1;
    }
    dfs(1,1);
    sort(cnt.rbegin(),cnt.rend());
    ll m;
    cin>>m;
    for (ll i=1;i<=m;i++)cin>>c[i];
    sort (c+1,c+1+m,cmp);
    c[0]=1;
    ll ans=0;
    if (m>n)
    {
        for (ll i=1;i<=m-n+1;i++)
        {
            c[i]=(c[i]*c[i-1])%mod;
        }
        for (ll i=m-n+1;i<=m;i++)
        {
            c[i-(m-n)]=c[i]%mod;
        }
    }
    ll ans1=0,ans2=0;
    for (ll i=1;i<=n;i++)
    {
        ll tmp=((c[i]%mod)*(cnt[i-1]%mod))%mod;
        ans1=(ans1+tmp)%mod ;
    }
    sort(cnt.begin(),cnt.end());
    for (ll i=1;i<=n;i++)
    {
        ll tmp=((c[i]%mod)*(cnt[i-1]%mod))%mod;
        ans2=(ans2+tmp)%mod ;
    }
    ans=max(ans1,ans2);
    cout<<ans<<endl;
}
