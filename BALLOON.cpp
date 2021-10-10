#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e3+1;
int f[maxn][maxn],a[maxn];
int32_t main()
{

    int n,k,m;
    cin>>n>>k>>m;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    //sort(a+1,a+1+n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            for (int tmp=1;tmp<=min(i,k);tmp++)
            {
                f[i][j]=max(f[i][j],f[i-tmp][j-1]+a[i]*j);
            }
        }
    }
    int ans=0;
    for (int i=1;i<=n;i++) ans=max(ans,f[i][m]);
    cout<<ans<<endl;
}
