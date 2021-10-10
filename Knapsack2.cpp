#include<bits/stdc++.h>
using namespace std;
const long long maxn=110,V=1e5+5,inf=1e18;
long long w[maxn],v[maxn],dp[maxn][V];
int main()
{
    long long i,n,j,W;
    cin>>n>>W;
    for (i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
    }
    for (i=1;i<=n;i++) for (int j=1;j<V;j++) dp[i][j]=inf;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<V;j++)
        {
            if (v[i]<=j) dp[i][j]=min(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    int ans=0;
    for (int j=1;j<V;j++) if (dp[n][j]<=W&&dp[n][j]>0) ans=j;
    cout<<ans<<endl;
}
