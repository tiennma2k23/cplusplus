#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+5,inf=1e9+5;
ll a[maxn];
void solve()
{
    ll n,m,c;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    ll minn=inf,maxx=-inf;
    for (ll i=2;i<=n;i++)
    {
        minn=min(minn,a[i]-a[i-1]);
        maxx=max(maxx,a[i]-a[i-1]);
    }
    if (minn==maxx)
    {
        cout<<0<<endl;
        return;
    }
    for (ll i=2;i<=n;i++)
    {
        if (a[i]>a[i-1])
        {
            c=a[i]-a[i-1];
            break;
        }
    }
    for (ll i=1;i<=n;i++)
    {
        if (a[i]<a[i-1])
        {
            m=a[i-1]+c-a[i];
            break;
        }
    }
    bool ck=true;
    for (ll i=1;i<=n;i++)
    {
        if (a[i]>=m)
        {
            ck=false;
            break;
        }
    }
    for (ll i=2;i<=n;i++)
    {
        if ((a[i-1]+c)%m!=a[i])
        {
            ck=false;
            break;
        }
    }
    if (!ck) cout<<-1<<endl;
    else cout<<m<<" "<<c<<endl;
}

int main()
{
    ll q;
    cin>>q;
    while (q--) solve();
}
