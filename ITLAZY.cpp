#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAXN=1+1e6;
const LL v=1e5;
const LL inf=1e9;
LL n,a[MAXN],q;
struct Node {
    int lazy = -inf;
    int val;
} nodes[MAXN * 4];
void down(int id) {
    if (nodes[id].lazy == -inf) return;
    int t = nodes[id].lazy;
    nodes[id*2].lazy = t;
    nodes[id*2].val = t;

    nodes[id*2+1].lazy = t;
    nodes[id*2+1].val = t;

    nodes[id].lazy = -inf;
}
void update(int id, int l, int r, int u, int v, int val) {
    if (v < l || r < u) {
        return ;
    }
    if (u <= l && r <= v) {

        nodes[id].val = val;
        nodes[id].lazy = val;
        return ;
    }
    int mid = (l + r) / 2;

    down(id);

    update(id*2, l, mid, u, v, val);
    update(id*2+1, mid+1, r, u, v, val);

    //if (l == 1 && r == 3) cerr << nodes[id * 2].val << ' ' << nodes[id * 2 + 1].val << '\n';
    nodes[id].val = max(nodes[id*2].val, nodes[id*2+1].val);
}
int get(int id, int l, int r, int u, int v) {

    if (v < l || r < u) {
        return -inf;
    }
   // cerr << id << ' ' << l << ' ' << r << ' ' << nodes[id].val << '\n';
    if (u <= l && r <= v) {
        return nodes[id].val;
    }
    int mid = (l + r) / 2;
    down(id);

    return max(get(id*2, l, mid, u, v),
        get(id*2+1, mid+1, r, u, v));

}
int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;++i)a[i]=-inf;
    for(int i=1;i<=n;++i){
      cin>>a[i];
      update(1,1,n,i,i,a[i]);
    }
    while(q--){
      int k,x,l,r;
      cin>>k;
      if(k==1) {cin>>l>>r>>x;update(1,1,n,l,r,x);}
      if(k==2) {cin>>l>>r;cout<<get(1,1,n,l,r)<<'\n';}
    }
    return 0;
}
