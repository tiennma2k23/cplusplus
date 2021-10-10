#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e6+10;
long long tree[4*MAXN];

void update(int id, int l, int r, int i, long long val){
    if (i > r || i < l) return;
    if (l == r){
        tree[id] = val;
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2, l, mid, i, val);
    update(id * 2 + 1, mid + 1, r, i, val);
    tree[id] = max(tree[id * 2] , tree[id * 2 + 1]);
}

long long get(int id, int l, int r, int u, int v){
    if (r < u || v < l) return -INFINITY;
    if (u <= l && r <= v) return tree[id];
    int mid = (l + r) / 2;
    return max(get(id * 2, l, mid, u, v) , get(id * 2 + 1, mid + 1, r, u, v));
}

int main()
{

    int n,i,q;
    long long k;
    char ch;
    cin>>n>>q;
    while (q--)
    {
        cin>>ch>>i>>k;
        if (ch=='S') update(1,1,n,i,k);
        else cout<<get(1,1,n,i,k)<<endl;
    }

}
