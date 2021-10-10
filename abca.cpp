#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e3+1,INF=1e14;
ll n,m,a[maxn][maxn];
ll tong(ll x,ll y)
{
    ll res=LLONG_MAX;
    for (ll i=x;i<=m;i++)
        for (ll j=y;j<=n;j++)
    {
        ll tmp=a[i][j]-a[i-x][j]-a[i][j-y]+a[i-x][j-y];
        res=min(res,tmp);
    }
    return res;
}
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll ans=LLONG_MAX,k;
    cin>>m>>n>>k;
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++)
    {
        char ch;
        cin>>ch;
        a[i][j]=ch-'0';
    }
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++) a[i][j]+=a[i-1][j];
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++) a[i][j]+=a[i][j-1];
    for (ll i1=1;i1<=sqrt(k);i1++)
    {
        if (k%i1==0)
        {
            ll x1=i1;
            ll x2=k/i1;
            ans=min(ans,tong(x1,x2));
            ans=min(ans,tong(x2,x1));
        }
    }
    if (ans==LLONG_MAX)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<endl;
}
