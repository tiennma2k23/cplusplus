#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1501;
ll m,n,a[maxn][maxn],fs[maxn][maxn],fe[maxn][maxn],mx1[maxn][maxn],mx2[maxn][maxn];
void prepare()
{
        for (ll i=1;i<=m;i++)
            for (ll j=1;j<=n;j++) fs[i][j]=max(fs[i-1][j],fs[i][j-1])+a[i][j];
        for (ll i=m;i>=1;i--)
                for (ll j=n;j>=1;j--) fe[i][j]=max(fe[i+1][j],fe[i][j+1])+a[i][j];

        for (ll i=1;i<=m;i++)
        for (ll j=n;j>=1;j--)
    {
        ll tmp=fs[i][j]+fe[i][j]-a[i][j];
        mx1[i][j]=max(max(tmp,mx1[i-1][j]),mx1[i][j-1]);
    }

    for (ll i=m;i>=1;i--)
        for (ll j=1;j<=n;j++)
    {
        ll tmp=fs[i][j]+fe[i][j]-a[i][j];
        mx2[i][j]=max(max(tmp,mx2[i-1][j]),mx2[i][j-1]);
    }
}

void solve()
{
    ll ans=LLONG_MAX;
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++)
    {
        if ((i!=1||j!=1)&&(i<m||j<n))
        {
            ll tmp1=mx1[i-1][j+1];
            ll tmp2=mx2[i+1][j-1];
            ans=min(ans,max(tmp1,tmp2));
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>m>>n;
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++) cin>>a[i][j];
    prepare();
    solve();
}
