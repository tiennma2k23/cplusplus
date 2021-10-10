#include<bits/stdc++.h>

#define st first
#define nd second

#define ll long long
#define double long double
#define ld long double
#define y1 yy
#define data Data

using namespace std ;

typedef pair< int , int > ii ;
typedef pair< ll , ll > lii ;
typedef pair< int , ii > iii ;

const int maxn = 4e5 + 3 ;
const int maxm = 1e6 + 3 ;
const int mod = 1e9 + 7 ;
const int oo = 1061109567 ;
const long long loo = 4557430888798830399 ;
const double pi = 3.141592653589793238462643383279502884 ;

void input() {
    #define name "abc"
	if (fopen(name".inp" , "r") ){
        freopen(name".inp" , "r" , stdin) ;
        freopen(name".out" , "w" , stdout) ;
	}
	ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
}

int t , n , k ;
int A[109][3] ;
vector< int > p ;
vector< int > a[109][3] ;

bool is_prime (int x) {
    for (int i = 2 ; i <= sqrt(x) ; ++ i)
        if (x % i == 0) return 0 ;
    return 1 ;
}

vector< int > dp[102][102][102] ;

bool cmp (const vector< int > &a , const vector< int > &b) {
    double x = 0 , y = 0 ;
    for (int i = 0 ; i < p.size() ; ++ i) {
        x += log((double)p[i]) * a[i] ;
        y += log((double)p[i]) * b[i] ;
    }
    return x < y ;
}

bool operator == (const vector< int > &a , const vector< int > &b) {
    for (int i = 0 ; i < a.size() ; ++ i)
        if (a[i] != b[i]) return 0 ;
    return 1 ;
}

vector< int > operator * (const vector< int > & a , vector< int > &b) {
    vector< int > c ;
    for (int i = 0 ; i < p.size() ; ++ i) c.push_back(a[i] + b[i]) ;
    return c ;
}

vector< int > ans ;

void trace_on (int i , int j , int k) {
    if (!i || !j || !k) return ;
    if (A[i][0] == A[j][1] && A[j][1] == A[k][2] && dp[i - 1][j - 1][k - 1] * a[i][0] == dp[i][j][k]) {
        ans.push_back(A[i][0]) ;
        trace_on(i - 1 , j - 1 , k - 1) ;
        return ;
    }
    if (dp[i][j][k] == dp[i - 1][j][k]) trace_on(i - 1 , j , k) ;
    else if (dp[i][j][k] == dp[i][j - 1][k]) trace_on(i , j - 1 , k) ;
    else trace_on(i , j , k - 1) ;
}

int main() {
	input();
	cin >> n ;
	for (int i = 2 ; i <= 100 ; ++ i)
        if (is_prime(i)) p.push_back(i) ;
	for (int it = 0 ; it < 3 ; ++ it) {
        for (int i = 1 , x ; i <= n ; ++ i) {
            cin >> x ;
            A[i][it] = x ;
            for (int j : p) {
                int cnt = 0 ;
                while (x % j == 0) {
                    cnt ++ ;
                    x /= j ;
                }
                a[i][it].push_back(cnt) ;
            }
        }
	}

	vector< int > v0(p.size() , 0) ;
	for (int i = 0 ; i <= n ; ++ i)
        for (int j = 0 ; j <= n ; ++ j)
            for (int k = 0 ; k <= n ; ++ k)
                dp[i][j][k] = v0 ;

	for (int i = 1 ; i <= n ; ++ i) {
        for (int j = 1 ; j <= n ; ++ j) {
            for (int k = 1 ; k <= n ; ++ k) {
                dp[i][j][k] = max({dp[i - 1][j][k] , dp[i][j - 1][k] , dp[i][j][k - 1]} , cmp) ;
                if (A[i][0] == A[j][1] && A[j][1] == A[k][2]) {
                    if (!(dp[i - 1][j - 1][k - 1] == v0)) dp[i][j][k] = max(dp[i][j][k] , dp[i - 1][j - 1][k - 1] * a[i][0] , cmp) ;
                    else dp[i][j][k] = a[i][0] ;
                }
            }
        }
	}

    trace_on(n , n , n) ;
    cout << ans.size() << "\n" ;
    for (int i = ans.size() - 1 ; i >= 0 ; -- i) cout << ans[i] << " " ;

	return 0;
}
