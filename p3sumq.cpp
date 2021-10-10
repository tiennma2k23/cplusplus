#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5e3+1,maxm=2e6+1,inf=1e6;
vector<int> pos[maxm];
int f[maxn][maxn],a[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#define TASK "p3sumq"
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
    int n,q;
    cin>>n>>q;
    for (int i=1;i<=n;i++) cin>>a[i],pos[a[i]+inf].push_back(i);

    for (int l=n;l>=1;l--)
        for (int r=l;r<=n;r++)
    {
        f[l][r]=f[l][r-1]+f[l+1][r]-f[l+1][r-1];
        int sum=a[l]+a[r];
        if (abs(sum)>inf) continue;
        sum=-sum+inf;
        int le=lower_bound(pos[sum].begin(),pos[sum].end(),l+1)-pos[sum].begin();
        int ri=upper_bound(pos[sum].begin(),pos[sum].end(),r-1)-pos[sum].begin();
        if (ri>=le) f[l][r]+=ri-le;
    }
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<f[l][r]<<endl;
    }
}
