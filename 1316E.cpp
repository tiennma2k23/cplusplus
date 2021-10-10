
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define se second
#define fi first
using namespace std;
const int maxn=1e5+1;
II a[maxn];int s[maxn][8],f[maxn][(1<<7)+1];
int32_t main()
{
    int n,p,k;
    cin>>n>>p>>k;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i].fi;
        a[i].se=i;
    }
    for (int i=1;i<=n;i++) for (int j=0;j<p;j++) cin>>s[i][j];
    sort(a+1,a+1+n);
    reverse(a+1,a+1+n);
    f[0][0]=0;
    for (int i=1;i<=n;i++)
        for (int mask=0;mask<(1<<p);mask++)
    {
        int cnt1=__builtin_popcount(mask);
        if (cnt1>=i) continue;
        if (i-cnt1<=k) f[i][mask]=max(f[i][mask],f[i-1][mask]+a[i].fi);
        else f[i][mask]=max(f[i][mask],f[i-1][mask]);
        for (int bit=0;bit<p;bit++)
        {
            if (!(mask&(1<<bit)))
                f[i][mask|(1<<bit)]=max(f[i][mask|(1<<bit)],f[i-1][mask]+s[a[i].se][bit]);
        }
    }
    cout<<f[n][(1<<p)-1]<<endl;

}
