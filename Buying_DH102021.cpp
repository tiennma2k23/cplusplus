#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=3e3+5,inf=4557430888798830399;
int x[maxn],y[maxn],z[maxn],f[202][202][202];
int n;
void subtask2()
{
    for(int i=1; i<=n; i++) cin>>x[i]>>y[i]>>z[i];

    int ans=inf;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n-i; j++)
        {
            for(int k=0; k<=n-i-j; k++)
            {
                if(i+j+k>n) break;
                f[i][j][k]=inf;
            }
        }
    }
    f[0][0][0]=0;
    for(int i=0; i<=n; ++i)
    {
        for(int j=0; j<=n-i; ++j)
        {
            for(int k=0; k<=n-i-j; ++k)
            {
                if(i+j+k>n) break;
                if(i+j+k==n)
                {
                    ans=min(ans,f[i][j][k]);
                    break;
                }
                if(i<n) f[i+1][j][k]=min(f[i+1][j][k],f[i][j][k]+x[i+j+k+1]);
                if(j<n) f[i][j+1][k]=min(f[i][j+1][k],f[i][j][k]+y[i+j+k+1]-j);
                if(k<n) f[i][j][k+1]=min(f[i][j][k+1],f[i][j][k]+z[i+j+k+1]-k);
            }
        }
    }
    cout<<ans<<endl;
    return;
}



struct nodes
{
    int x,y,z;
};
bool cmp(nodes a,nodes b)
{
    return a.y-a.x<=b.y-b.x;
}

nodes a[maxn];
int dp[maxn][maxn][2];
void subtask3()
{
    for(int i=1; i<=n; i++) cin>>a[i].x>>a[i].y>>a[i].z;
    sort(a+1,a+1+n,cmp);
    int ans=inf;
    memset(dp,inf,sizeof(dp));
    dp[0][0][0]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j<i && j!=0)
            {
                dp[i][j][0]=min(dp[i-1][j][0]+a[i].y-(i-j-1),dp[i-1][j-1][0]+a[i].z-j+1);
                dp[i][j][1]=min(min(dp[i-1][j][0],dp[i-1][j][1])+a[i].x,dp[i-1][j-1][1]+a[i].z-j+1);
            }
            else if(j>0)
            {
                dp[i][j][0]=min(dp[i-1][j][0]+a[i].y-(i-j-1),dp[i-1][j-1][0]+a[i].z-j+1);
            }
            else if(j==0)
            {
                dp[i][j][0]=dp[i-1][j][0]+a[i].y-i+1;
                dp[i][j][1]=min(dp[i-1][j][0],dp[i-1][j][1])+a[i].x;
            }
            if(i==n) ans=min(ans,min(dp[i][j][1],dp[i][j][0]));
        }
    }
    cout<<ans<<endl;
    return;
}


int32_t main()
{
    cin>>n;
    if(n<=200)
    {
        subtask2();
    }
    else subtask3();
}
