
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

const int maxn = 2e5 + 3 ;
const int maxm = 1e6 + 3 ;
const int mod = 1e9 + 7 ;
const int oo = 1061109567 ;
const ll loo = 4557430888798830399 ;
const ld pi = 3.141592653589793238462643383279502884 ;


int t , n ;
ll pref[maxm] , a[maxn] ;
string s ;

int main() {
	cin >> t ;
    while (t -- ) {
        cin >> n >> s ;
        s = " " + s ;
        int m = 0 ;
        for (int i = 1 ; i <= n ; ++ i) {
            if (s[i] == '*'){
                a[++ m] = i ;
                pref[m] = pref[m - 1] + i ;
            }
        }
        ll suff = 0 , ans = loo ;
        for (int i = m ; i > 0 ; -- i) {
            ans = min(ans , a[i] * (i - 1) - pref[i - 1] - 1ll * i * (i - 1) / 2 + suff - a[i] * (m - i) - 1ll * (m - i) * (m - i + 1) / 2) ;
            suff += a[i] ;
        }
        if (m == 0) ans = 0 ;
        cout << ans << endl;
    }

	return 0;
}
