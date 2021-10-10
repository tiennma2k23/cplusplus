//Thanhcopcode
//ahihi tach VOI
#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define se second
#define fi first
using namespace std;
const ll maxn=5e5+1;
II p[maxn];
ll c[maxn],ans=LLONG_MAX;
map<II,ll> vt;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        ll x,y,z;
        cin>>x>>y;
        p[i]=II(y,x);
        if (vt[p[i]]==0) vt[p[i]]=i;
        else
        {
            ans=min(ans,vt[p[i]]);
        }
    }
    sort(p+1,p+1+n);
    c[1]=1;
    for (ll i=2;i<=n;i++)
    {
        ll key=p[i].se;
        ll pos=lower_bound(p+1,p+1+n,II(key,0))-p-1;
        ll m=c[i-1];
        if (pos>=1) m=max(m,c[pos]+1);
        else
        {
            m=max(m,1ll);
            ans=min(ans,vt[p[i]]);
        }
        c[i]=m;
    }
    //if (c[n]==n) cout<<-1<<endl;
    //else cout<<c[n]<<endl;
    if (ans!=LLONG_MAX) cout<<ans<<endl;
    else cout<<-1<<endl;
}
