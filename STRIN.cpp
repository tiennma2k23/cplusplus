#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+5,MOD=1e9+7;
int dp[maxn][3];
int32_t main()
{
    int n;
    cin>>n;
    dp[1][0]=2;
    dp[1][1]=1;
    for(int i=2; i<=n; i++)
    {
        dp[i][0]=((dp[i-1][0]+dp[i-1][1])*2)%MOD;
        dp[i][1]=(dp[i-1][0])%MOD;
    }
    int ans=(dp[n][1]+dp[n][0])%MOD;
    cout<<ans<<endl;
}

