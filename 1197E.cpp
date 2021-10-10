#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1,inf=2e9+1,mod=1e9+7;
vector<II> v;
struct nodes
{
    int cost;int tot;int out;
};
nodes ST[4*maxn];

nodes combine(nodes a, nodes b)
{
    nodes ans;
    if (a.cost-a.out < b.cost-b.out)
    {
        return a;
    }
    if (a.cost-a.out > b.cost-b.out)
    {
        return b;
    }
        ans=a;
        ans.tot=(ans.tot+b.tot)%mod;
        return ans;
}

void build(int id,int l,int r)
{
    if (l==r)
    {
        ST[id].cost=v[l-1].se;
        ST[id].tot=0;
        ST[id].out=v[l-1].fi;
        return;
    }
    int mid=(r+l)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    ST[id]=combine(ST[id*2],ST[id*2+1]);
}

nodes get(int id, int l,int r, int u, int v)
{
    if (v<l||r<u) return {inf,0ll,0ll};
    if (u<=l&&v>=r) return ST[id];
    int mid=(l+r)/2;
    return combine(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}

void update(int id,int l,int r,int pos,II val)
{
    if (l==r)
    {
        ST[id].cost=val.fi;
        ST[id].tot=val.se;
        return;
    }
    int mid=(l+r)/2;
    if (pos<=mid) update(id*2,l,mid,pos,val);
    else update(id*2+1,mid+1,r,pos,val);
    ST[id]=combine(ST[id*2],ST[id*2+1]);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int in,o;
        cin>>in>>o;
        v.push_back(II(in,o));
    }
    sort(v.begin(),v.end());
    build(1,1,n);
    for (int i=0;i<n;i++)
    {
        II tmp=II(v[i].se,inf);
        auto it=upper_bound(v.begin(),v.end(),tmp);
        if (it==v.begin())
        {
            update(1,1,n,i+1,II(v[i].se,1ll));
        }
        else
        {
            it--;
            int id=(it-v.begin());
            nodes _next=get(1,1,n,1,id+1);
            II _tmp=II((v[i].se-_next.out+_next.cost+mod)%mod,_next.tot);
            update(1,1,n,i+1,_tmp);
        }
    }
    int _last=0;
    for (int i=0;i<n;i++)
    {
        _last=max(_last,v[i].se);
    }
    int minn=inf;
    int ans=0;
    vector<nodes> val;
    for (int i=0;i<n;i++)
    {
        if (v[i].fi>_last)
        {
            nodes res=get(1,1,n,i+1,i+1);
            minn=min(minn,res.cost);
            val.push_back(res);
        }
    }
    for (auto _val:val)
    {
        if (_val.cost==minn) ans+=_val.tot,ans%=mod;
    }
    cout<<ans<<endl;
}
