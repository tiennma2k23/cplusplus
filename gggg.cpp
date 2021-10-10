#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORd(i,a,b) for(int i=a;i>=b;i--)

const int N=4e5+10;

struct Node
{
    int lmin;
    int xh;
};

Node ST[N];
int a[N];

Node combine(Node x, Node y)
{
    Node res;
    res.lmin=min(x.lmin,y.lmin);
    if (x.lmin>y.lmin) res.xh=y.xh;
    else if (y.lmin>x.lmin) res.xh=x.xh;
    else res.xh=x.xh+y.xh;
    return res;
}

void update(int id, int l, int r, int i, int v)
{
    if (i<l||i>r) return ;
    if (l==r) {
        ST[id].lmin=v;
        ST[id].xh=1;
        return ;
    }
    int mid=(l+r)/2;
    update(id*2,l,mid,i,v);
    update(id*2+1,mid+1,r,i,v);
    ST[id]=combine(ST[id*2],ST[id*2+1]);
}

Node get(int id, int l, int r, int u, int v)
{
    if (v<l||r<u) return (Node){INT_MAX,0};
    if (u<=l&&r<=v) return ST[id];
    int mid=(l+r)/2;
    return combine(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif // ONLINE_JUDGE */
    int n,m;
    cin >> n >> m;
    FOR(i,0,n-1)
    {
        cin >> a[i];
        update(1,0,n-1,i,a[i]);
    }
    FOR(i,1,m)
    {
        int q,l,r;
        cin >> q >> l >> r;
        if (q==1) update(1,0,n-1,l,r);
        else {
            Node ans=get(1,0,n-1,l,r-1);
            cout << ans.lmin << ' ' << ans.xh << '\n';
        }
    }
}
