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

const int maxn = 5e5 + 5 ;
const int maxm = 1e6 + 3 ;
const int mod = 1e9 ;
//const ll mod = 1e9 + 7 ;
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

ld l , d , x , a ;

void solve() {
    cin >> l >> d >> x >> a ;
    if (a > (ld)90) a = (ld)180 - a ;
    ld ta = tan(pi * a / 180) ;
    //x=d-x;
    ld f = ta * x ;
    ll ans = 0 ;
//    cout << fixed << setprecision(6) << f << "\n" ;
    if (f < l) {
        ans = 1 ;
        l -= f ;
        f = ta * d ;
        ld cur = l / f ;
//        cout << fixed << setprecision(6) << f << " " << l << "\n" ;
        ans += ll(cur) ;
    }
    cout << ans << "\n" ;
}

int main() {
    int t = 1 ;
    cin >> t ;
    for (int i = 1 ; i <= t ; ++ i) {
//        cout << "Case #" << i << ": " ;
        solve() ;
//        cout << "\n" ;
    }


	return 0;
}
