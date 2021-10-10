#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2000;
ll f[maxn][maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("XORMATRIX.inp","r",stdin);
    freopen("XORMATRIX.out","w",stdout);
    ll m,n,a,x=0,y=0;
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
    {
        cin>>a;
        f[i][m]=a;
        x=x^a;
    }
    for (ll i=1;i<=m;i++)
    {
        cin>>a;
        f[n][i]=a;
        y=y^a;
    }
    if (x==y)
    {
        cout<<"YES"<<endl;
        for (ll i=1;i<=n;i++){
            for (ll j=1;j<=m;j++) cout<<f[i][j]<<" ";
            cout<<endl;
        }
        return 0;
    }
    cout<<"NO"<<endl;
}
