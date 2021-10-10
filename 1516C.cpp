#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxx=1000*100+10;
bool dp[110][maxx];
int a[110];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,t=0,minn=maxx;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i],t+=a[i],minn=min(a[i],minn);
    if (t%2==1)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        bool kt=false;
        int res=t/2;
        dp[0][0]=true;
        for (int i=1;i<=n;i++) dp[i][0]=true;
        for (int i=1;i<=n;i++)
        {
            for (int j=a[i];j<=res;j++)
            {
                dp[i][j]=dp[i-1][j];
                dp[i][j]=max(dp[i-1][j-a[i]],dp[i][j]);
            }
            if (dp[i][res])
            {
                kt=true;
                break;
            }
        }
        if (!kt) cout<<0<<endl;
        else
        {
            cout<<1<<endl;
            for (int i=1;i<=n;i++) if (a[i]==minn)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
}
