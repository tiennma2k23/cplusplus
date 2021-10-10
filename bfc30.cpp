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

const int maxn = 5e5 + 3 ;
const int maxm = 1e6 + 3 ;
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

int n ;
int h[maxn] , l[maxn] , maxl[maxn];
stack< int > s ;

int main() {
	//input();
    cin >> n ;
    for (int i = 1 ; i <= n ; ++ i) {
        cin >> h[i] ;
        while (!s.empty() && h[i] >= h[s.top()]) s.pop() ;
        l[i] = s.empty() ? 0 : s.top() ;
        s.push(i) ;
        if (h[i] > h[maxl[i - 1]]) maxl[i] = i ;
        else maxl[i] = maxl[i - 1] ;
    }
    while (!s.empty()) s.pop() ;
    ll normal = 0 , add = 0 ;
    int maxr = 0 , r ;
    for (int i = n ; i > 0 ; -- i) {
        while (!s.empty() && h[i] >= h[s.top()]) s.pop() ;
        r = s.empty() ? n + 1 : s.top() ;
        s.push(i) ;
        if (h[i] > h[maxr]) maxr = i ;
        normal += min(h[maxr] , h[maxl[i]]) - h[i] ;
        if (h[i] >= min(h[maxl[i]] , h[maxr])) {
            ll cur = 0 ;
            if (l[i]) cur += i - l[i] - 1 ;
            if (r <= n) cur += r - i - 1 ;
            add = max(add , cur) ;
        }
    }
    cout << normal + add ;



	return 0;
}
