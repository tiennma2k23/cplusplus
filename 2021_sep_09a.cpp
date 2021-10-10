#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2001,mod=1e9+7;
int f[maxn][maxn][2],res[maxn][maxn],sum[maxn][maxn];
int32_t main()
{
    int n,k;
    cin>>n>>k;
    f[0][0][0]=1;
    for (int i=1;i<=n;i++)
        for (int j=0;j<=n;j++)
    {
        f[i][j][0]=(f[i-1][j][0]+f[i-1][j][1])%mod;
        if (j>0) f[i][j][1]=f[i-1][j-1][0];
    }
    for (int i=1;i<=k;i++)
    {
        res[i][1]=1;
        for (int j=2;j<=k;j++) res[i][j]=sum[i-1][j-1];
        for (int j=1;j<=k;j++) sum[i][j]=(sum[i-1][j]+res[i][j])%mod;
    }
    for (int i=1;i<=k;i++)
    {
        int ans=(f[n-k+i][i][0]+f[n-k+i][i][1])*res[k][i];
        ans%=mod;
        cout<<ans<<endl;
    }


}
