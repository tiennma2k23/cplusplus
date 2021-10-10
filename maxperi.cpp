#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int dp[maxn][2],a[maxn],b[maxn];
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    dp[1][0]=dp[1][1]=a[1]+b[1];
    for (int i=2;i<=n;i++)
    {
        dp[i][0]=max(dp[i-1][0]-a[i-1]+abs(a[i]-a[i-1])+a[i]+b[i],dp[i-1][1]-b[i-1]+abs(a[i]-b[i-1])+a[i]+b[i]);
        dp[i][1]=max(dp[i-1][0]-a[i-1]+abs(a[i-1]-b[i])+a[i]+b[i],dp[i-1][1]-b[i-1]+abs(b[i]-b[i-1])+a[i]+b[i]);
    }
    dp[n][0]-=a[n];
    dp[n][1]-=b[n];
    cout<<max(dp[n][1],dp[n][0])<<endl;
}
