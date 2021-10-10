#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 3;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
ll f[N], a[N];
void sol()
{
    ll n;
    cin>>n;
    ll ans=0;
    for (ll i=1; i<=n; i++) cin>>a[i];
    for(ll i = n ; i >= 1 ; i --)
    {
        if(i + a[i] > n) f[i] = a[i];
        else f[i] = f[i + a[i]] + a[i];
        ans = max(ans, f[i]);
    }
    cout<<ans<<endl;
}
int main()
{
    ll q;
    cin >>q;
    while(q--)
    {
        sol();
    }
}
