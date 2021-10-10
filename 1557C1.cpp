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

const int maxn = 2e5 + 5 ;
const int maxm = 1e7 + 3 ;
const ll mod = 1e9 + 7 ;
const int oo = 1061109567 ;
const ll loo = 4557430888798830399 ;
const ld pi = acos(-1) ;
const ld eps = 1e-6 ;
const int MMR = 1048576 ;

void input() {
    #define name "abc"
	if (fopen(name".inp" , "r") ){
        freopen(name".inp" , "r" , stdin) ;
        freopen(name".out" , "w" , stdout) ;
	}
	ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
}

int n , k ;
ll fact[maxn] , rfact[maxn] ;

ll Pow (ll a , ll n) {
    if (!n) return 1 ;
    ll m = Pow(a , n / 2) ;
    return (n % 2 ? (m * m % mod) * a % mod : m * m % mod) ;
}

ll C (int k , int n) {
    if (n < k || k < 0) return 0 ;
    return (fact[n] * rfact[k] % mod) * rfact[n - k] % mod ;
}

void solve() {
    cin >> n >> k ;
    if (n % 2) {
        ll cur = 1 ;
        for (int i = 0 ; i <= n ; i += 2) cur = (cur + C(i , n)) % mod ;
        ll ans = 1 ;
        for (int i = 0 ; i < k ; ++ i) ans = (ans * cur) % mod ;
        cout << ans << "\n" ;
    }
    else {
        ll cur = 0 ;
        for (int i = 0 ; i < n ; i += 2) cur = (cur + C(i , n)) % mod ;
        ll ans = 1 ;
        for (int i = 0 ; i < k ; ++ i) ans = (ans * cur) % mod ;
        ll pref = 1 ;
        for (int i = 0 ; i < k ; ++ i) {
            ans = (ans + (pref * Pow(Pow(2 , n) , k - i - 1) % mod)) % mod ;
            pref = (pref * cur) % mod ;
        }
        cout << ans << "\n" ;
    }
}
int32_t main() {
	int N = 2e5 ;
	fact[0] = rfact[0] = 1 ;
	for (int i = 1 ; i <= N ; ++ i) fact[i] = fact[i - 1] * i % mod ;
	rfact[N] = Pow(fact[N] , mod - 2) ;
	for (int i = N - 1 ; i >= 0 ; -- i) rfact[i] = rfact[i + 1] * (i + 1) % mod ;

    int t = 1 ;
    cin >> t ;
    for (int i = 1 ; i <= t ; ++ i) {
//        cout << "Case #" << i << ": " ;
        solve() ;
//        cout << "\n" ;
    }


	return 0;
}
