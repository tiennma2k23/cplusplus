
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1,inf=1e9+1;
int a[maxn];
int n;
struct nodes {
    int lazy;
    int val;
};
nodes ST[maxn*4];
void down(int id) {
    int t = ST[id].lazy;
    ST[id*2].lazy += t;
    ST[id*2].val += t;

    ST[id*2+1].lazy += t;
    ST[id*2+1].val += t;

    ST[id].lazy = 0;
}
void update(int id, int l, int r, int u, int v, int val) {
    if (v < l || r < u) {
        return ;
    }
    if (u <= l && r <= v) {
        ST[id].val += val;
        ST[id].lazy += val;
        return ;
    }
    int mid = (l + r) / 2;

    down(id);

    update(id*2, l, mid, u, v, val);
    update(id*2+1, mid+1, r, u, v, val);

    ST[id].val = min(ST[id*2].val, ST[id*2+1].val);
}

int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return inf;
    }
    if (u <= l && r <= v) {
        return ST[id].val;
    }
    int mid = (l + r) / 2;
    down(id);

    return min(get(id*2, l, mid, u, v),get(id*2+1, mid+1, r, u, v));
}
bool ok(int mid,int r)
{
    update(1,1,n,mid,r,((mid-1)));
    int mn=get(1,1,n,mid,r);
    update(1,1,n,mid,r,-(mid-1));
    if (mn>=0) return true;
    return false;
}
int32_t main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]-=i;
        update(1,1,n,i,i,a[i]);
    }
    int ans=0;
    for (int r=1;r<=n;r++)
    {
        int _l=1,_r=r;
        while (_l<=_r)
        {
            int mid=(_l+_r)/2;
            if (ok(mid,r))
            {
                _r=mid-1;
                ans=max(ans,r-mid+1);
            }
            else _l=mid+1;
        }
        //for (int mid=_l;mid<=_r;mid++) if (ok(mid,r)) ans=max(ans,r-mid+1);
    }
    cout<<ans<<endl;
}
