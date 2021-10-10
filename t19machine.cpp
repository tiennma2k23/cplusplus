#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1e6+1,inf=1e18;
int f[maxn][4];
II a[maxn];
vector<int> v;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;
    cin>>n>>k;
    for (int i=1;i<=n;i++) cin>>a[i].se>>a[i].fi;
    sort(a+1,a+1+n);
    for (int i=0;i<=n;i++)
        for (int j=0;j<=k;j++) f[i][j]=-inf;
    for (int i=0;i<=n;i++) f[i][0]=0;
    for (int i=1;i<=n;i++)
    {
        f[i][1]=max(f[i-1][1],a[i].fi-a[i].se);
        for (int j=2;j<=k;j++)
        {
            f[i][j]=f[i-1][j];
            int pos=lower_bound(v.begin(),v.end(),a[i].se)-v.begin()-1;
            f[i][j]=max(f[i][j],f[pos+1][j-1]+a[i].fi-a[i].se);
        }
        v.push_back(a[i].fi);
    }
    if (f[n][k]<0) cout<<-1<<endl;
    else cout<<f[n][k]<<endl;
}
