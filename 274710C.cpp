#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1005,INF=1e18;
ll f[maxn][maxn];
int main()
{
    ll n;
    //f[i][j] đến lần thứ i được j khuyến mãi
    cin>>n;
    for (ll i=0;i<=n+1;i++)
        for (ll j=0;j<=n+1;j++) f[i][j]=INF;
    f[0][0]=0;
    for (ll i=1;i<=n;i++)
    {
        ll p;
        cin>>p;
        for (ll j=0;j<=i;j++)
        {
            f[i][j]=min(f[i][j],f[i-1][j+1]);// khi i-1 khuyenmai
            if (p>100)
            {
                if (j>0) f[i][j]=min(f[i][j],f[i-1][j-1]+p);
            }
            else f[i][j]=min(f[i][j],f[i-1][j]+p);
        }
    }
    ll ans=INF;
    for (ll j=0;j<=n;j++) ans=min(ans,f[n][j]);
    cout<<ans<<endl;
}
