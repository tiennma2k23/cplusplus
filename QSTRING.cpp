#include<bits/stdc++.h>
using namespace std;
struct Node {
    int lazy;
    char val;
} nodes[MAXN * 4];

void down(int id) {
    int t = nodes[id].lazy;
    nodes[id*2].lazy += t;
    nodes[id*2].val += t;

    nodes[id*2+1].lazy += t;
    nodes[id*2+1].val += t;

    nodes[id].lazy = 0;
}

void update(int id, int l, int r, int u, int v, int val) {
    if (v < l || r < u) {
        return ;
    }
    if (u <= l && r <= v) {
        nodes[id].val = char ((nodes[id].val-'A'+val)%26+'A');
        nodes[id].lazy += val;
        return ;
    }
    int mid = (l + r) / 2;

    down(id);

    update(id*2, l, mid, u, v, val);
    update(id*2+1, mid+1, r, u, v, val);

    nodes[id].val = nodes[id*2].val + nodes[id*2+1].val;
}

int main()
{
    string s;
    cin>>s;
    ll n=s.length();
    s=' '+s;
    string t=s;
    for (ll i=1;i<=n;i++) update(1,1,n,i,i,(s[i]-'A'));
    cin>>q;
    while (q--)
    {
        ll p,i,j,k;
        cin>>p;
        if (p==1)
        {
            cin>>i>>j>>k;
            i++,j++,k++;
            ll s1=get(1,1,n,i,j);
            ll s2=get(1,1,n,k,k+j-i);
            if (s1==s2) cout<<"Y"<<endl;
            else cout<<"N"<<endl;
        }
        else if (p==2)
        {
            cin>>i>>j>>k;
            i++,j++,k++;
            for  (ll tmp=i;tmp<=j;tmp++) update(1,1,n,tmp,tmp,(t[k+tmp-i]-s[i]));
        }
        else if (p==3)
        {
            cin>>i>>j;
            i++,j++;
            update(1,1,n,i,j,1);
        }
    }
}
