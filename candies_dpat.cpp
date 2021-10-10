#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=101,maxk=1e5+1,mod=1e9+7;
int v[maxn],dp[maxn][maxk];
int solve(int n,int k)
{
    for(int i=0; i<=v[1]; i++) dp[1][i]=1;
    for(int j=v[1]+1; j<=k; j++) dp[1][j]=0;
    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<=k; j++)
        {
            if(j==0) dp[i][j]=dp[i-1][j];
            else
            {
                dp[i][j]=(mod+dp[i][j-1]+dp[i-1][j]-((j>=(v[i]+1))?dp[i-1][j-v[i]-1]:0))%mod;
            }
        }
    }
    return dp[n][k];
}

int32_t main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>v[i];
    cout<<solve(n,k)<<endl;
}
