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

int n , m ;

void solve() {
    cin >> m >> n ;
    vector< pair< ll , int > > v ;
    for (int i = 1 , x ; i <= m ; ++ i) {
        ll a = 0 , b = 0 ;
        for (int j = 1 ; j <= n ; ++ j) {
            cin >> x ;
            if (x > 0) a += x ;
            else b += -x ;
        }
        v.push_back({a , i}) ;
        v.push_back({b , i}) ;
    }
    sort(v.begin() , v.end() , greater< pair< ll , int > > ()) ;
    if (v.size() == 2) cout << v[0].st << "\n" ;
    else {
        if (v[0].nd == v[1].nd) cout << v[0].st + v[2].st << "\n" ;
        else cout << v[0].st + v[1].st << "\n" ;
    }
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

