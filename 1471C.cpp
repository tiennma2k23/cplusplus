#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn = 10 + 1e5;
ll t;

int main(){
    cin >> t;
    while(t--)
    {
        ll n, m;
    cin >> n >> m;
    vector<ll> a(n+5), b(m+5);
    for(ll i = 0 ; i < n ; ++i) cin >> a[i];
    sort(a.rbegin(), a.rend());
    for(ll i = 0 ; i < m ; ++i) cin >> b[i];
    ll ans = 0, j = 0;
    for(ll  i = 0 ; i < n ; ++i){
        if(a[i] > j){
            ans += b[j];
            j++;
            continue;
        }
        ans += b[a[i]-1];
    }
    cout << ans << endl;
    }

    return 0;
}
