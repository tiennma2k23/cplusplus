#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int st[4*maxn+1];

void update(int id, int l, int r, int u, int val) {
    if (u < l || r < u) {
        return ;
    }
    if (l == r) {
        st[id] = val;
        return ;
    }
    int mid = (l + r) / 2;
    update(id*2, l, mid, u,val);
    update(id*2 + 1, mid+1, r, u,val);

    st[id] = st[id*2] + st[id*2+1];
}

int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return 0;
    }
    if (u <= l && r <= v) {
        return st[id];
    }
    int mid = (l + r) / 2;
    return get(id*2, l, mid, u, v)+get(id*2+1, mid+1, r, u, v);
}

int32_t main()
{
    int n,x;
    cin>>n>>x;
    int _n=n+100000;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if (a>=x) update(1,1,_n,i,1);
        else update(1,1,_n,i,0);
    }
    //cout<<get(1,1,n,1,1)<<endl;
    int m,out=0;
    cin>>m;
    while (m--)
    {
        int q;
        cin>>q;
        if (q==1)
        {
            int a;
            cin>>a;
            n++;
            if (a>=x) update(1,1,_n,n,1);
            else update(1,1,_n,n,0);
        }
        else if (q==2)
        {
            out++;
            update(1,1,_n,out,0);
        }
        else
        {
            int pos;
            cin>>pos;
            pos+=out;
            //cout<<pos<<endl;
            int ans=get(1,1,_n,1,pos);
            cout<<ans<<endl;
        }
    }
}
