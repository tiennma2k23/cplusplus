
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=1e4+1,inf=1e12;
int a[maxn],f[maxn],cost[10*maxn];
int32_t main()
{
#define TASK "umb"
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++) cin>>a[i],f[i]=inf;
    for (int i=1;i<=m;i++) cin>>cost[i];
    for (int i=m-1;i>=1;i--) cost[i]=min(cost[i+1],cost[i]);
    sort(a+1,a+1+n);
    f[0]=0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=i;j++) f[i]=min(f[i],f[j-1]+cost[a[i]-a[j]+1]);
    cout<<f[n]<<endl;
}
