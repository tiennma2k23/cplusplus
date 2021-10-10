#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=1e5+1;
ll t[maxn];
II p[maxn];
vector<ll> ans;
bool cmp(II a,II b)
{
    return a.fi>b.fi;
}
int main()
{
    ll n,s=0;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        s+=a;
        p[i]={a,i};
    }
    sort(p+1,p+1+n,cmp);
    t[0]=-1;
    ll ns=s/2,res=0;
    for (ll i=1;i<=n;i++)
        for (ll j=s;j>=p[i].fi;j--)
        if (t[j]==0&&t[j-p[i].fi]!=0)
    {
        t[j]=i;
        if (j>ns&&j-p[i].fi<=ns) res=max(res,j);
    }
    while (res)
    {
        ans.push_back(p[t[res]].se);
        res-=p[t[res]].fi;
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for (auto i:ans) cout<<i<<" ";
}
