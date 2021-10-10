#include<bits/stdc++.h>
#define int long long
using namespace std;
int f[31][10200],m,n;
bool ok(int mask1,int mask2)
{
    for (int j=1; j<n; j++)
    {
        int a=(mask1&(1<<j) !=0);
        int a1=(mask2&(1<<j) !=0);
        int b=(mask1&(1<<(j-1)) !=0);
        int b1=(mask2&(1<<(j-1)) !=0);
        if (a==a1&&a1==b&&b==b1) return false;
    }
    return true;
}

void solve()
{
    for (int i=0; i<m; i++)
        for (int mask=0; mask< (1<<n); mask++) f[i][mask]=0;
    for (int i=0; i< (1<<n) ; i++) f[0][i]=1;
    for (int i=1; i<m; i++)
        for (int mask=0; mask< (1<<n); mask++)
        {
            f[i][mask]=0;
            for (int mask2=0; mask2< (1<<n); mask2++)
            {
                if (ok(mask,mask2)) f[i][mask]+=f[i-1][mask2];
            }
        }
    int ans=0;
    for (int i=0; i< (1<<n); i++) ans+=f[m-1][i];
    cout<<ans<<endl;
    return;
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        //int n,m;
        cin>>m>>n;
        if (m<n) swap (m,n);
        solve();
    }
}
