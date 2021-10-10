#include<bits/stdc++.h>
using namespace std;
const int inf=1e5+1;
int ST[4*inf];
void update(int id, int l, int r, int i, int v) {
    if (i < l || r < i) {
        return ;
    }
    if (l == r) {
        ST[id] = v;
        return ;
    }

    int mid = (l + r) / 2;
    update(id*2, l, mid, i, v);
    update(id*2 + 1, mid+1, r, i, v);

    ST[id] = __gcd(ST[id*2], ST[id*2 + 1]);
}

int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return 0;
    }
    if (u <= l && r <= v) {
        return ST[id];
    }
    int mid = (l + r) / 2;
    return __gcd(get(id*2, l, mid, u, v), get(id*2 + 1, mid+1, r, u, v));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        update(1,1,n,i,x);
    }
    int ans=inf,le,ri;
    for (int i=1;i<=n;i++)
    {
        int l=i+1,r=n;
        while (l<=r)
        {
            int mid=(l+r)/2;
            int res=get(1,1,n,i,mid);
            if (res==1)
            {
                ans=min(ans,mid-i+1);
                if (ans==mid-i+1) le=i,ri=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
    }
    if (ans==inf)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<" "<<le<<" "<<ri<<endl;
}
