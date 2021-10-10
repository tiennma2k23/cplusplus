#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10001],d[10001];
void solve()
{
    ll n,k;
    cin>>n>>k;
    if(k>=(n+1)/2)
    {
        cout<<-1<<endl;
        return;
    }
    for (ll i=1; i<=n; i++) d[i]=0;
    cout<<1<<" " ;
    d[1]++;
    ll x=2;
    while(k--)
    {
        cout<<n-x+2<<" "<<x<<" ";
        d[n-x+2]++;
        d[x]++;
        x++;
    }
    for (ll i=1; i<=n; i++) if (!d[i]) cout<<i<<" ";
    cout<<endl;;
}
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
