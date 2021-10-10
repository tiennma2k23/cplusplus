#include<bits/stdc++.h>
#define ll long long
const ll maxn=1e6+10,INF=1e10;
using namespace std;
vector<ll> a(maxn),r(maxn),l(maxn),kq(maxn);
int main()
{
    ll n,ans=0;
    cin>>n;
    a[0]=-INF;
    a[n+1]=INF;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++) {
        if (a[i]>a[i-1]) l[i]=l[i-1]+1;
        else l[i]=1;
    }
    for (ll i=n;i>=1;i--)
    {
        if (a[i]>a[i+1]) r[i]=r[i+1]+1;
        else r[i]=1;
    }
    for (ll i=1;i<=n;i++)
    {
        kq[i]=max(l[i],r[i]);
        ans+=kq[i];
    }
    cout<<ans<<endl;
    for (ll i=1;i<=n;i++) cout<<kq[i]<<" ";
}
