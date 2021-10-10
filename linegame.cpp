#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+1;
int f[maxn][2],a[maxn];
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    f[0][0]=0;
    f[0][1]=0;
    for (int i=1;i<=n;i++)
    {
        f[i][0]=max(f[i-1][0],f[i-1][1]+a[i]);
        f[i][1]=max(f[i-1][1],f[i-1][0]-a[i]);
    }
    cout<<f[n][1]<<endl;
}
