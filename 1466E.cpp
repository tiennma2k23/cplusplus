
#include<bits/stdc++.h>
#define ll long long
#define TNX Tiennguxi
#define code byTruc
using namespace std;
const ll N = 5e5 + 5;
const ll mod = 1e9 + 7;
const ll INF = 1e9;
ll n, x[N], T, bits[64], s1[N], s2[N];
void solve()
{
    ll kq = 0;
    cin >> n;
    ll s = 0;
    for(ll i = 0 ; i < 64 ; i ++) bits[i] = 0;
    for(ll i = 1 ; i <= n ; i ++) s1[i] = s2[i] = 0;
    T = 0;
    for(ll i = 1 ; i <= n ; i ++)
    {
        cin >> x[i];
        T += x[i];
        T %= mod;
        for(ll j = 0 ; j <= 60 ; j ++)
        {
            if(x[i] & (1ll << j)) bits[j] ++;
        }
    }
    for(ll i = 1 ; i <= n ; i ++)
    {
        for(ll j = 0 ; j <= 60 ; j ++)
        {
            if(x[i] & (1ll << j)) s1[i] += (1ll << j) % mod * bits[j] % mod, s1[i] %= mod;
        }
    }
    for(ll i = 1 ; i <= n ; i ++) s2[i] = (T + (x[i] % mod * n % mod) - s1[i] + mod * mod) % mod;
    for(ll i = 1 ; i <= n ; i ++)
    {
        kq = (kq + s1[i] * s2[i] % mod) % mod;
        //cerr<<kq<<endl;
    }
    cout << kq << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin >> q;
    while(q --) solve();
}
