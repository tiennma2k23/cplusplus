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
const int maxm = 1e6 + 3 ;
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

ll n , m , w , h , x1 , x2 , y1 , y2 ;

void solve() {
    cin >> m >> n >> x1 >> y1 >> x2 >> y2 >> w >> h ;
    ll ans = loo ;
    if (w + x2 - x1 <= m) {
        if (x1 >= w) ans = 0 ;
        else ans = min(ans , w - x1) ;
        if (m - x2 >= w) ans = 0 ;
        else ans = min(ans , w - (m - x2)) ;
    }
    if (h + y2 - y1 <= n) {
        if (y1 >= h) ans = 0 ;
        else ans = min(ans , h - y1) ;
        if (n - y2 >= h) ans = 0 ;
        else ans = min(ans , h - (n - y2)) ;
    }
    if (ans != loo) cout << fixed << setprecision(9) << (ld)ans << "\n" ;
    else cout << "-1\n" ;
}

int main() {
	int q;
	cin>>q;
	while (q--) solve();
}
