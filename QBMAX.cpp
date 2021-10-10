
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=105,inf=1e9+7;
int f[maxn][maxn],a[maxn][maxn];
int32_t main()
{
    int m,n,ans=-inf;
    cin>>m>>n;
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++) cin>>a[i][j];
    for (int i=1;i<=m;i++) f[i][1]=a[i][1];
    for (int i=1;i<=n;i++) f[0][i]=f[m+1][i]=-inf;
    for (int j=2;j<=n;j++)
    for (int i=1;i<=m;i++) f[i][j]=max({f[i-1][j-1],f[i][j-1],f[i+1][j-1]})+a[i][j];
    for (int i=1;i<=m;i++) ans=max(ans,f[i][n]);
    cout<<ans<<endl;

}
