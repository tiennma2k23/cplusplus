#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
map<int,vector<int>> pos;
int ST[4*maxn+1];
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

    ST[id] = max(ST[id*2], ST[id*2 + 1]);
}

int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return 0;
    }
    if (u <= l && r <= v) {
        return ST[id];
    }
    int mid = (l + r) / 2;
    return max(get(id*2, l, mid, u, v), get(id*2 + 1, mid+1, r, u, v));
}
int ans[maxn],h[maxn];
set<int> st;
void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>h[i];
        pos[h[i]].push_back(i);
        st.insert(h[i]);
        update(1,1,n,i,h[i]);
    }
    //int ans=0;
    vector<int> v;
    for (auto val:st)
    {
        int d=1;
        v.clear();
        v.push_back(pos[val][0]);
        for (int i=1;i<pos[val].size();i++)
        {
            int maxx=get(1,1,n,pos[val][i-1],pos[val][i]);
            if (maxx<=val) d++,v.push_back(pos[val][i]);
            else
            {
                //ans+=(d*(d-1))/2;
                for (auto vt:v) ans[vt]=d-1;
                d=1;
                v.clear();v.push_back(pos[val][i]);
            }
        }
        //ans+=(d*(d-1))/2;
        for (auto vt:v) ans[vt]=d-1;
    }
    for (int i=1;i<=n;i++)
    {
        cout<<ans[i]<<' ';
        ans[i]=0;
        pos[h[i]].clear();
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
