#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=100;
ll a[maxn][maxn];
int main()
{
    ll m,n,k;
    cin>>m>>n       ;
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++)
    {
        cin>>a[i][j];
    }
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++) a[i][j]+=a[i-1][j]+a[i-1][j];
    for (ll i=1;i<=m;i++){
        for (ll j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
