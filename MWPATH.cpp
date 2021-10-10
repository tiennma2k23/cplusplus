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

const int maxn = 1e5 + 5 ;
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

int n , m , k , s , t ;
vector< ii > g[maxn] ;
int b[maxn] ;
vector< ll > d[maxn][2] ;
vector< int > ms[maxn] ;

struct node {
    ll du ;
    int u , cnt , pre ;
    node () {}
    node (ll _du , int _u , int _cnt , int _pre) : du(_du) , u(_u) , cnt(_cnt) , pre(_pre) {}
    bool operator < (const node &a) const {
        return du > a.du ;
    }
};

int main() {
	//input();
    scanf ("%lld",&n);
scanf ("%lld",&m);
    for (int i = 1 , u , v , w ; i <= m ; ++ i) {
        scanf ("%lld",&u);
	 scanf ("%lld",&v);
 scanf ("%lld",&w);
        g[u].push_back({v , w}) ;
        ms[v].push_back(w) ;
    }
    for (int v = 1 , sz ; v <= n ; ++ v) {
        if (ms[v].empty()) {
            d[v][0].assign(2 , loo) ;
            d[v][1].assign(2 , loo) ;
            continue ;
        }
        sort(ms[v].begin() , ms[v].end()) ;
        ms[v].resize(unique(ms[v].begin() , ms[v].end()) - ms[v].begin()) ;
        sz = ms[v].size() ;
        d[v][0].assign(sz + 2 , loo) ;
        d[v][1].assign(sz + 2 , loo) ;
    }

    scanf ("%lld",&k);
    for (int i = 1 , a ; i <= k ; ++ i) {
       scanf ("%lld",&a);
        b[a] = 1 ;
    }
scanf ("%lld",&s);
scanf ("%lld",&t);
    //cin >> s >> t ;

    priority_queue< node > q ;
    q.push(node(d[s][b[s]][0] = 0 , s , b[s] , 0)) ;
    ll du ;
    int v , w , cur , u , pre , cnt , ncnt ;

    while (!q.empty()) {
        du = q.top().du , u = q.top().u ; cnt = q.top().cnt ; pre = q.top().pre ;
        q.pop() ;
        if (du != d[u][cnt][pre]) continue ;
        for (auto i : g[u]) {
            v = i.st ; w = i.nd ;
            ncnt = cnt + b[v] ;
            if (ncnt >= 2) continue ;
            cur = (lower_bound(ms[v].begin() , ms[v].end() , w) - ms[v].begin()) + 1 ;
            if ((!pre || ms[u][pre - 1] <= (w << 1) && w <= (ms[u][pre - 1] << 1)) && d[v][ncnt][cur] > du + w)
                q.push(node(d[v][ncnt][cur] = du + w , v , ncnt , cur)) ;
        }
    }

    ll ans = loo ;
    for (int i = 0 ; i <= ms[t].size() ; ++ i) ans = min(ans , d[t][1][i]) ;
    cout << (ans < loo ? ans : -1) ;


	return 0;
}
