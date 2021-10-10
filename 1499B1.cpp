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
const int maxm = 1e7 + 3 ;
const int mod = 1e9 + 7 ;
const ll oo = 2e18 + 5 ;
const ld pi = 3.141592653589793238462643383279502884 ;

void input() {
    #define name "abc"
	if (fopen(name".inp" , "r") ){
        freopen(name".inp" , "r" , stdin) ;
        freopen(name".out" , "w" , stdout) ;
	}
	ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
}

int t ;
string s ;

bool solve (int flag) {
    int i = flag ;
    while (1) {
        if (i >= s.size() - 2) return 1 ;
        int n = s[i] - '0' ,
            n1 = s[i + 1] - '0' ,
            n2 = s[i + 2] - '0' ;
        if (n > n1 && n > n2) return 0 ;
//        cout << i << " " << n << " " << n1 << " " << n2 << "\n" ;
        if (n <= n1) {
            if (n2 >= n && n2 <= n1) i += 2 ;
            else i ++ ;
        }
        else {
            if (n <= n2) i += 2 ;
        }
    }

    return 0 ;
}

int main() {
	input();
	cin >> t ;
	while (t -- ) {
        cin >> s ;
        if (solve(0) || solve(1)) cout << "YES\n" ;
        else cout << "NO\n" ;
	}

	return 0;
}
