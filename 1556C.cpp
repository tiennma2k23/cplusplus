#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn] ;

void solve()
{
    int n;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++) cin >> a[i] ;
    int ans = 0 ;
    for (int i = 1 ; i < n ; i += 2)
    {
        int cur = 0, _min = 0 ;
        for (int j = i + 1 ; j <= n ; j += 2)
        {
            if (a[i] + _min < 0) break ;
            int l = cur - _min, r = cur + a[i] ;
            l = max(l, 0ll) ;
            r = min(r, a[j]) ;
            if (l <= r) ans += r - l + 1 ;
            _min = min(_min, cur - a[j]) ;
            cur += - a[j] + a[j + 1] ;
        }
    }
    ans -= n / 2 ;
    cout<<ans<<endl;
}

int32_t main()
{
    solve();
}
