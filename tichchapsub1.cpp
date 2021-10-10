
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5001,inf=1e18;
int a[maxn],f[maxn][maxn],b[maxn];
int n;
void sub2()
{
    int ans=-inf;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++) f[i][j]=-inf;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            f[i][j]=max(f[i][j],f[i-1][j-1]+a[i]*b[j]);
            f[i][j]=max(f[i][j],a[i]*b[j]);
            ans=max(ans,f[i][j]);
        }
    }
}

void sub1()
{
    int ans=-inf;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            int tmp=0;
            for (int len=0;len<=min(n-i,n-j);len++)
            {
                tmp+=a[i+len]*b[j+len];
                ans=max(ans,tmp);
            }
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    freopen("A.inp","r",stdin);
    freopen("A.ans","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++) cin>>b[i];
    if (n<=500) sub1();
    //sub2();
}
