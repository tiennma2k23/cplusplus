#include<bits/stdc++.h>

#define st first
#define nd second

#define y1 yy
#define data Data

using namespace std ;

typedef long long ll ;
typedef unsigned long long ull ;
typedef long double ld ;
typedef pair< int , int > ii ;
typedef pair< ll , ll > lii ;
typedef pair< int , ii > iii ;

const int maxn = 2e3 + 5 ;
const int maxm = 1e7 + 3 ;
//const int mod = 998244353 ;
const ll mod = 1e9 + 7 ;
const int oo = 1061109567 ;
const ll loo = 4557430888798830399 ;
const ld pi = acos(-1) ;
const ld eps = 1e-6 ;

void input() {
    #define name "abc"
	if (fopen(name".inp" , "r") ){
        freopen(name".inp" , "r" , stdin) ;
        freopen(name".out" , "w" , stdout) ;
	}
	ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
}

int n , k , q ;
int a[maxn] , dp[maxn] ;

bool ok (ll lmt) {
    for (int i = 2 ; i <= n + 1 ; ++ i) dp[i] = oo ;
    dp[0] = dp[1] = 0 ;
    for (int i = 2 ; i <= n + 1 ; ++ i) {
        for (int j = 0 ; j < i ; ++ j) {
            ll dif = (j == 0 || i == n + 1) ? 0 : abs(a[i] - a[j]) ;
            if (dif <= lmt * (i - j)) dp[i] = min(dp[i] , dp[j] + i - j - 1) ;
        }
    }
    return dp[n + 1] <= k ;
}

void solve() {
    cin >> n >> k ;
    for (int i = 1 ; i <= n ; ++ i) cin >> a[i] ;
    ll l = 0 , r = int(2e9 + 1) ;
    ll ans = r ;
    while (l <= r) {
        ll mid = (l + r) / 2 ;
        if (ok(mid)) {
            ans = min(ans , mid) ;
            r = mid - 1 ;
        }
        else l = mid + 1 ;
    }
    cout << ans << "\n" ;
}

int main() {
	input() ;
    int t = 1 ;
//    cin >> t ;
    for (int i = 1 ; i <= t ; ++ i) {
//        cout << "Case #" << i << ": " ;
        solve() ;
//        cout << "\n" ;
    }


	return 0;
}
