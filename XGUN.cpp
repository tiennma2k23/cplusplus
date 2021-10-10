#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN=1e5+10,INF=1e18;
const ll minn=-1e9;
struct Node {
    ll lazy = minn;
    ll val=0;
};

Node nodes[4*MAXN],nodes2[4*MAXN];
//min
void downm(ll id) {
    if (nodes[id].lazy == minn) return;
    int t = nodes[id].lazy;
    nodes[id*2].lazy = t;
    nodes[id*2].val = t;

    nodes[id*2+1].lazy = t;
    nodes[id*2+1].val = t;

    nodes[id].lazy = minn;
}
void updatem(ll id, ll l, ll r, ll u, ll v, ll val) {
    if (v < l || r < u) {
        return ;
    }
    if (u <= l && r <= v) {

        nodes[id].val = val;
        nodes[id].lazy = val;
        return ;
    }
    ll mid = (l + r) / 2;

    downm(id);

    updatem(id*2, l, mid, u, v, val);
    updatem(id*2+1, mid+1, r, u, v, val);
    nodes[id].val = min(nodes[id*2].val, nodes[id*2+1].val);
}
ll getm(ll id, ll l, ll r, ll u, ll v) {

    if (v < l || r < u) {
        return INF;
    }
    if (u <= l && r <= v) {
        return nodes[id].val;
    }
    ll mid = (l + r) / 2;
    downm(id);
    return min(getm(id*2, l, mid, u, v),
        getm(id*2+1, mid+1, r, u, v));

}

//sum
void downs(ll id) {
    if (nodes2[id].lazy == minn) return;
    ll t = nodes2[id].lazy;
    nodes2[id*2].lazy = t;
    nodes2[id*2].val = t;

    nodes2[id*2+1].lazy = t;
    nodes2[id*2+1].val = t;

    nodes2[id].lazy = minn;
}
void updates(ll id, ll l, ll r, ll u, ll v, ll val) {
    if (v < l || r < u) {
        return ;
    }
    if (u <= l && r <= v) {

        nodes2[id].val = val;
        nodes2[id].lazy = val;
        return ;
    }
    int mid = (l + r) / 2;

    downs(id);

    updates(id*2, l, mid, u, v, val);
    updates(id*2+1, mid+1, r, u, v, val);
    nodes2[id].val = nodes2[id*2].val+ nodes2[id*2+1].val;
}
ll gets(ll id, ll l, ll r, ll u, ll v) {

    if (v < l || r < u) {
        return 0;
    }
    if (u <= l && r <= v) {
        return nodes2[id].val;
    }
    ll mid = (l + r) / 2;
    downs(id);
    return gets(id*2, l, mid, u, v)+gets(id*2+1, mid+1, r, u, v);

}
int main()
{
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        ll h;
        cin>>h;
        updatem(1,1,n,i,i,h);
        updates(1,1,n,i,i,h);
    }
    ll m;
    cin>>m;
    while (m--)
    {
        ll i,l;
        cin>>i>>l;
        ll mi=getm(1,1,n,i,i+l);
        cout<<mi<<endl;
        cout<<gets(1,1,n,i,i+l)-mi*(l+1)<<endl;

        updatem(1,1,n,i,i+l,mi);
        updates(1,1,n,i,i+l,mi);cout<<gets(1,1,n,1,n)<<endl;
    }
}
