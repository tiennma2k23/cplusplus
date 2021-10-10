#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1,inf=1e9+1;
int f[maxn],d[maxn];
set<int> s[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    #define TASK "movie"
    freopen(TASK".in","r",stdin);
    freopen(TASK".out","w",stdout);
    int n,l;
    cin>>n>>l;

    for (int i=1; i<(1<<n); i++) f[i]=-inf;

    for (int i=0; i<n; i++)
    {
        cin>>d[i];
        int c;
        cin>>c;
        while (c--)
        {
            int x;
            cin>>x;
            s[i].insert(x);
        }
    }
    int ans=inf;
    f[0]=0;
    for (int mask=0; mask<(1<<n); mask++)
    {
        if (f[mask]>=l)
        {
            int cnt=__builtin_popcount(mask);
            ans=min(ans,cnt);
        }
        for(int i=0; i<n; i++)
        {
            if (mask&(1<<i)) continue;
            auto it=s[i].upper_bound(f[mask]);
            if (it==s[i].begin()) continue;
            it--;
            int t=*it+d[i];
            f[mask|(1<<i)] = max(f[mask|(1<<i)],t);
        }
    }
    cout<<ans<<endl;
}
