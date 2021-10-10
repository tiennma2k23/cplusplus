#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+1;
set<int> s[maxn];
void solve()
{
    int n,m,q;
    cin>>n>>m ;
    while (m--)
    {
        int u,v;
        cin>>u>>v ;
        if (u>v) swap(u,v) ;
        s[u].insert(v) ;
    }
    int ans=0 ;
    for (int i=1; i<=n; i++) if (s[i].empty()) ans ++ ;
    cin>>q ;
    while (q--)
    {
        int t;
        cin>>t;
        if (t==3) cout<<ans<<endl;
        else
        {
            int u,v;
            cin>>u>>v ;
            if (u>v) swap(u,v) ;
            if (t==1)
            {
                if (s[u].empty()) ans -- ;
                s[u].insert(v) ;
            }
            else
            {
                s[u].erase(s[u].find(v)) ;
                if (s[u].empty()) ans ++ ;
            }
        }
    }
}

int32_t main()
{
    solve();
}
