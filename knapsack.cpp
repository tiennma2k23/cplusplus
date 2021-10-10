#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>

#define fi first
#define se second
using namespace std;
const int maxn=5e4+1,inf=1e18+1,N=1e6+1;
int f[110][N];
II a[110];
int32_t main()
{
    int n,h;
    cin>>n>>h;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i].fi>>a[i].se;
    }
    for (int i=0;i<=n;i++) for (int j=0;j<N;j++) f[i][j]=inf;
    for (int j=0;j<=n;j++) f[j][0]=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=0;j<N;j++)
        {
            f[i][j]=f[i-1][j];
            if (j>=a[i].fi) f[i][j]=min(f[i][j],f[i][j-a[i].fi]+a[i].se);
        }
    }
    int ans=inf;
    for (int j=h;j<N;j++) ans=min(ans,f[n][j]);
    cout<<ans<<endl;
    //cout<<f[n][h]<<endl;
}
