#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1;
vector<II> gr[maxn] ;
struct nodes
{
    int lazy=0;
    int _max=0;
};
nodes st[4*maxn];
void down (int id)
{
    st[id * 2].lazy += st[id].lazy;
    st[id * 2]._max += st[id].lazy ;
    st[id * 2 + 1].lazy += st[id].lazy ;
    st[id * 2 + 1]._max += st[id].lazy ;
    st[id].lazy = 0 ;
}

void update (int id, int l, int r, int u, int v, int val)
{
    if (v < l || r < u) return ;
    if (u <= l && r <= v)
    {
        st[id]._max += val ;
        st[id].lazy += val ;
        return ;
    }
    int mid = (l + r) / 2 ;
    down(id) ;
    update(id * 2, l, mid, u, v, val) ;
    update(id * 2 + 1, mid + 1, r, u, v, val) ;
    st[id]._max = max(st[id * 2]._max, st[id * 2 + 1]._max) ;
}

int32_t main()
{
    int n,m;
    cin>>n>>m;
    while (m--)
    {
        int l,r,w;
        cin>>l>>r>>w;
        gr[r].push_back(II(l,w));
    }
    for (int i=1; i<=n; i++)
    {
        update(1,1,n,i,i,st[1]._max) ;
        for (auto j:gr[i])
        {
            update(1,1,n,j.fi,i,j.se) ;
        }
    }
    int ans=max(0ll,st[1]._max);
    cout<<ans<<endl;
}
