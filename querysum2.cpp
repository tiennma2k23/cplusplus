
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;

struct nodes
{
    int lz;int sum;
};

nodes ST[4*maxn];

void down(int id,int l,int r) {

    int t=ST[id].lz;
    if (t==0) return;
    int mid=(l+r)/2;
    ST[id*2].lz+=t;
    ST[id*2].sum+=t*((mid-l+1);

    ST[id*2+1].lz+=t;
    ST[id*2+1].sum+=t*(r-mid);

    ST[id].lz = 0;
}

void update(int id,int l,int r,int u,int v,int val)
{
    if (v<l||r<u) return;
    if (u<=l&&r<=v)
    {
        ST[id].sum+=val*(r-l+1);
        ST[id].lz+=val;
        return;
    }
    int mid=(l+r)/2;

    down(id,l,r);

    update(id*2, l, mid, u, v, val);
    update(id*2+1, mid+1, r, u, v, val);
    ST[id].sum=ST[id*2].sum+ST[id*2+1].sum;
}

int get(int id,int l, int r,int u,int v)
{
    if (v<l||r<u) return 0;
    if (u<=l&&r<=v) return ST[id].sum;
    int mid=(l+r)/2;

    down(id,l,r);
    return get(id*2,l,mid,u,v)+get(id*2+1,mid+1,r,u,v);
}

int32_t main()
{
    int n,q;
    cin>>n>>q;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        update(1,1,n,i,i,a);
    }
    //cout<<get(1,1,n,1,1)<<endl;;
    while (q--)
    {
        int type;
        cin>>type;
        if (type==1)
        {
            int u,v,c;
            cin>>u>>v>>c;
            update(1,1,n,u,v,c);
        }
        else
        {
            int u,v;
            cin>>u>>v;
            cout<<get(1,1,n,u,v)<<endl;
        }
    }
}
