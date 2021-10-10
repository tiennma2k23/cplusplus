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

const int maxn = 4e3 + 5 ;
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

//ld l , d , x , a ;
//
//void solve() {
//    cin >> l >> d >> x >> a ;
//    if (a > (ld)90) a = (ld)180 - a ;
//    ld ta = tan(pi * a / 180) ;
//    ld f = ta * x ;
//    ll ans = 0 ;
////    cout << fixed << setprecision(6) << f << "\n" ;
//    if (f < l) {
//        ans = 1 ;
//        l -= f ;
//        f = ta * d ;
//        ld cur = l / f ;
////        cout << fixed << setprecision(6) << f << " " << l << "\n" ;
//        ans += ll(cur) ;
//    }
//    cout << ans << "\n" ;
//}

int n , k ;
ll dp[maxn][maxn][2] , a[maxn] ;

void trace_on (int id , int i , int k) {
    if (i == id || k == 0) return ;
    if (dp[i][k][id] == dp[i - 1][k][id]) trace_on(id , i - 1 , k) ;
    else {
        cout << i - 1 << " " ;
        trace_on(id , i - 2 , k - 1) ;
    }
}

void solve() {
    cin >> n >> k ;
    memset(dp , 0x3f , sizeof(dp)) ;

    for (int i = 1 ; i <= n ; ++ i) cin >> a[i] ;

    dp[0][0][0] = 0 ;
    for (int i = 1 ; i < n ; ++ i) {
        dp[i][1][0] = min(dp[i - 1][1][0] , a[i]) ;
        dp[i][0][0] = 0 ;
        for (int j = 2 ; j <= min(k , i) ; ++ j) {
            dp[i][j][0] = min(dp[i - 1][j][0] , dp[i - 2][j - 1][0] + a[i]) ;
        }
    }

    dp[1][0][1] = 0 ;
    for (int i = 2 ; i <= n ; ++ i) {
        dp[i][1][1] = min(dp[i - 1][1][1] , a[i]) ;
        dp[i][0][1] = 0 ;
        for (int j = 2 ; j <= min(k , i - 1) ; ++ j) {
            dp[i][j][1] = min(dp[i - 1][j][1] , dp[i - 2][j - 1][1] + a[i]) ;
        }
    }

    cout << min(dp[n - 1][k][0] , dp[n][k][1]) << "\n" ;

    if (dp[n - 1][k][0] < dp[n][k][1]) trace_on(0 , n - 1 , k) ;
    else trace_on(1 , n , k) ;
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
