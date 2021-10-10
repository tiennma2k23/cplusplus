
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e3+1,mod=1e9+9;
int f[maxn][maxn][11],a[maxn],b[maxn];
int32_t main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=m;i++) cin>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    for (int i=0;i<=n;i++) for (int j=0;j<=m;j++) f[i][j][0]=1;
    for (int i=0;i<=n;i++) for (int j=0;j<=m;j++)
    {
        for (int t=1;t<=k;t++)
        {
            if (i) f[i][j][t]+=f[i-1][j][t];
            if (j) f[i][j][t]+=f[i][j-1][t];
            if (i && j) f[i][j][t]-=f[i-1][j-1][t];
            if (i && j && a[i]>b[j]) f[i][j][t]+=f[i-1][j-1][t-1];
            f[i][j][t]=(f[i][j][t]+mod)%mod;
        }
    }
    cout<<f[n][m][k]<<endl;
}
