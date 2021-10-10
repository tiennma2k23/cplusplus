#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
II a[3001];

ll t[6002][3001];

bool cmp(II a,II b)
{
    if (a.fi!=b.fi) return a.fi<b.fi;
    return a.se>b.se;
}
int main()
{
    ll n,ans=0;
    ll tim3;
    cin>>n>>tim3;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i].fi>>a[i].se;
    }
    sort(a+1,a+1+n);
    t[1][a[1].fi]=a[1].se;
    for (ll i=1;i<=n;i++)
    {
        for (ll j=0;j<tim3;j++)
        {
            t[i][j+a[i].fi]=t[i][j+a[i].fi-1];
            t[i][j+a[i].fi]=max(t[i-1][j+a[i].fi],max(t[i-1][j]+a[i].se,t[i][j+a[i].fi]));
            ans=max(ans,t[i][j+a[i].fi]);
        }
    }
    cout<<ans<<endl;
}
