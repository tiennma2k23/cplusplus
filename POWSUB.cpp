#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define IIi pair<II,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=1e5+1;
IIi p[maxn];
ll dem,b[maxn],ans[maxn],S,a[maxn],n,kq[maxn];
map<ll,ll> d;
bool cmp(IIi A, IIi B)
{
  if (A.fi.fi / S != B.fi.fi / S) {
    return A.fi.fi / S < B.fi.fi / S;
  }
  return A.fi.se < B.fi.se;
}
int main()
{
    freopen("POWSUB.inp","r",stdin);
    freopen("POWSUB.out","w",stdout);
    ll t,l,r,l1,r1;
    cin>>n>>t;
    S=sqrt(n);
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=t;i++)
    {
        ll x,y;
        cin>>x>>y;
        p[i].fi=II(x,y);
        p[i].se=i;
    }
    sort(p,p+1+t,cmp);
    l=p[1].fi.fi;r=p[1].fi.se;
    //cout<<l<<" "<<r<<endl;
    for (ll i=l;i<=r;i++)
    {
        if (d[a[i]]==0) dem++,b[dem]=a[i];
        d[a[i]]++;
    }
    for (ll i=1;i<=dem;i++)
    {
        ans[1]+=b[i]*d[b[i]]*d[b[i]];
    }
    //cout<<d[1]<<endl;
    //cout<<ans[1]<<endl;
    for (ll i=2;i<=t;i++)
    {
        l1=p[i].fi.fi;
        r1=p[i].fi.se;
        if (l<l1){
        while (l<l1)
        {
            ans[i]=ans[i-1]-a[l]*(2*d[a[l]]-1);
            d[a[l]]--;
            l++;
        }
        }
        else if (l>l1){
        while (l>l1)
        {
            l--;
            ans[i]=ans[i-1]+a[l]*(2*d[a[l]]+1);
            d[a[l]]++;
        }
        }
        if (r<r1){
        while (r<r1)
        {
            r++;
            ans[i]=ans[i-1]+a[r]*(2*d[a[r]]+1);
            //cout<<d[a[r]]<<endl;
            d[a[r]]++;
        }
        }
        else if (r>r1){
        while (r>r1)
        {
            ans[i]=ans[i-1]-a[r]*(2*d[a[r]]-1);
            d[a[r]]--;
            r--;
        }
        }
        l=p[i].fi.fi;
        r=p[i].fi.se;
        //cout<<ans[i]<<endl;
    }
    for (ll i=1;i<=t;i++)
    {
        kq[p[i].se]=ans[i];
    }
    for (ll i=1;i<=t;i++) cout<<kq[i]<<endl;
}
