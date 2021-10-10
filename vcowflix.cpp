#include<bits/stdc++.h>
#define int long long
using namespace std;
int dp[16+5],a[16+5];
int32_t main()
{
    int c,n;
    cin>>c>>n;

    for (int i=1;i<=n;i++) cin>>a[i];
    dp[0]=0;
    for (int i=1;i<=n;i++){
        dp[i]=dp[i-1];
        for (int j=0;j<i;j++) if (dp[j]+a[i]<=c) dp[i]=max(dp[i],dp[j]+a[i]);
    }
    cout<<dp[n]<<endl;
}
