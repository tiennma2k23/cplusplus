#include<bits/stdc++.h>

#define st first
#define nd second

#define ll long long
#define ld long double
#define y1 yy
#define data Data

using namespace std ;

typedef pair< int , int > ii ;
typedef pair< ll , ll > lii ;
typedef pair< int , ii > iii ;

const int maxn = 2e5 + 5 ;
const int maxm = 1e6 + 5 ;
//const int mod = 998244353 ;
const int mod = 1e9 + 7 ;
const int oo = 1061109567 ;
const ll loo = 4557430888798830399 ;
const ld pi = 3.141592653589793238462643383279502884 ;

void input() {
    #define name "abc"
	if (fopen(name".inp" , "r") ){
        freopen(name".inp" , "r" , stdin) ;
        freopen(name".out" , "w" , stdout) ;
	}
	ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
}

int n , m ;
int a[maxn] , e[2] , o[2] ;
string s ;

void solve() {
    cin >> s ;
    n = s.size() ;
    e[0] = e[1] = o[0] = o[1] = 0 ;
    if (s[0] != '?') e[s[0] - '0'] ++ ;
    int i = 1 , j = 0 ;
    ll ans = 1 ;
    while (i < n) {
        if (i % 2) o[s[i] - '0'] ++ ;
        else e[s[i] - '0'] ++ ;
        while (j < i && (min(o[1] , o[0]) > 0 || min(e[1] , e[0]) > 0) || min(e[1] , o[1]) > 0 || min(e[0] , o[0]) > 0) {
            if (j % 2) o[s[j] - '0'] -- ;
            else e[s[j] - '0'] -- ;
            j ++ ;
        }
        ans += i - j + 1;
//        cout << i << " " << j << "\n" ;
        i ++ ;
    }
    cout << ans << "\n" ;
}

int main() {
	//input() ;
    int t = 1 ;
    cin >> t ;
    while (t -- ) solve() ;


	return 0;
}
