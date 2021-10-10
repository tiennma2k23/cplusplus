#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1001,mod=1000003;
char ch[maxn][maxn];
ll dp[maxn][maxn];
ll dist (ll x, ll y)
{
    return x-1+y-1;
}
int main()
{
    //freopen("A.inp","r",stdin);
    //freopen("A.out","w",stdout);
    ll n,i,j,k;
    cin>>n;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++) cin>>ch[i][j];
    string s;
    cin>>s;
    ch[1][1]==s[0]?dp[1][1]=1:dp[1][1]=0;
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++)
    {
        if (i!=1||j!=1)
        {
            k=dist(i,j);
            if (ch[i][j]!=s[k]) continue;
            if (i>1)
            {
                k=dist(i-1,j);
                if (s[k]==ch[i-1][j]) dp[i][j]+=dp[i-1][j],dp[i][j]%=mod;
            }
            if (j>1)
            {
                k=dist(i,j-1);
                if (s[k]==ch[i][j-1]) dp[i][j]+=dp[i][j-1],dp[i][j]%=mod;
            }
        }
    }
    }
    cout<<dp[n][n]<<endl;
}
