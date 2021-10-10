#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int dp[maxn],a[maxn];
char ch[3][maxn];

int calc(int dd, int x)
{
    if (dd==1)
    {
        if (x==0) return 1;
        if (x==1) return 2;
        return 0;
    }
    if (x==0) return 1;
    if (x==4) return 0;
    return 2;
}

void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=2;i++)
        for (int j=1;j<=n;j++) cin>>ch[i][j];

    for (int i=1;i<=n;i++) a[i]=ch[1][i]+ch[2][i]-'0'-'0';
    for (int i=0;i<=n;i++) dp[i]=0;
    for (int i=1;i<=n;i++)
    {
        if (i>=1) dp[i]=max(dp[i],dp[i-1]+calc(1ll,a[i]));
        if (i>=2) dp[i]=max(dp[i],dp[i-2]+calc(2ll,a[i]+a[i-1]));
    }
    cout<<dp[n]<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
