#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define IIL pair<II,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=2e5+1,inf=LLONG_MAX;
IIL v[maxn];
ll c[maxn],vt[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll m,n;
    cin>>m>>n;
    for (ll i=1;i<=m;i++)
    {
        cin>>v[i].fi.fi>>v[i].fi.se>>v[i].se;
    }
    sort(v+1,v+1+m);
    for (ll i=1;i<=m;i++)
    {
        if (v[i].fi.fi!=v[i-1].fi.fi) vt[i]=i;
        else vt[i]=vt[i-1];
    }
    for (ll i=1;i<=m;i++)
    {
        c[i]=c[i-1]+v[i].se;
    }
    ll ans=0;
    for (ll i=1;i<=n;i++)
    {
        ll p1=lower_bound(v+1,v+1+m,IIL(II(i,0),0))-v,p2=0;
        //cerr<<p1<<endl;
        ll tmp=c[m];
        //cerr<<tmp<<endl;
        //for (ll j=p1-1;j>=1;j--)
        //    if (v[j].fi.se>=i) tmp-=v[j].se;
        ll j=p1-1;
        while (j>=1)
        {
            ll p=lower_bound(v+vt[j]+1,v+1+j,IIL(II(v[j].fi.fi,i-1),inf))-v;
            //cerr<<j<<" "<<p<<endl;
            tmp-=(c[j]-c[p-1]);
            j=vt[j]-1;
        }
        if (v[p1].fi.fi==i)
        {
            p2=upper_bound(v+1,v+1+m,IIL(II(i,inf),inf))-v-1;
            if (v[p2].fi.fi==i) tmp-=(c[p2]-c[p1-1]);
            //cerr<<" "<<p2;
        }
        ans=max(ans,tmp);
        //cerr<<tmp<<endl;
        //cerr<<p1<<" "<<p2<<" "<<tmp<<endl;
        //cerr<<p1<<endl;
    }
    cout<<ans<<endl;
}
