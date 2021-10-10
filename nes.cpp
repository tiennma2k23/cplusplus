#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 3e5 + 3;
ll a[N];
bool ck(ll i, ll v, ll n)
{
    if(i == 1 || i == n) return 0;
    if(v > a[i - 1] && v > a[i + 1]) return 1;
    if(v < a[i - 1] && v < a[i + 1]) return 1;
    return 0;
}

int main()
{
    ll tv;
    cin >> tv;
    while(tv --)
    {
        ll n;
        cin >> n;
        vector<ll> d(n + 3, 0);
        for(ll i=1; i<=n; i++) cin >> a[i];
        ll ans = 0;
        for(ll i=2; i<n; i++)
        {
            d[i] = d[i - 1];
            if(ck(i, a[i],n)) d[i] = d[i - 1] + 1, ans++;
        }
        d[n] = d[n - 1];
        if(d[n]) ans = min(ans, d[n] - 1);
        for(ll i = 1 ; i <= n ; i ++)
        {
            ll opt = 0;
            if(i > 1) opt = d[i - 2];
            opt += d[n] - d[i + 1];
            ll tmp = a[i], add = 0;
            if(i > 1)
            {
                a[i] = a[i - 1];
                if(ck(i, a[i],n)) add ++;
                if(ck(i - 1, a[i - 1],n)) add ++;
                if(ck(i + 1, a[i + 1],n)) add ++;
                ans = min(ans, opt + add);
            }
            if(i < n)
            {
                add = 0;
                a[i] = a[i + 1];
                if(ck(i, a[i],n)) add ++;
                if(ck(i - 1, a[i - 1],n)) add ++;
                if(ck(i + 1, a[i + 1],n)) add ++;
                ans = min(ans, opt + add);
                a[i] = tmp;
            }
        }
        cout << ans << endl;
    }
}
//a truc ganh
