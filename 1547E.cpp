#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn = 3e5 + 5 ,oo=LLONG_MAX;
int n , k ;
II a[maxn] ;
int st[maxn << 2] , lz[maxn << 2] , L[maxn << 2] , R[maxn << 3] ;

void build (int id , int l , int r) {
    L[id] = l ; R[id] = r ;
    if (l == r) {
        st[id] = a[l].fi + abs(a[l].se - 1) ;
        lz[id] = 0 ;
        return ;
    }
    int mid = (l + r) >> 1 ;
    build(id << 1 , l , mid) ;
    build(id << 1 | 1 , mid + 1 , r) ;
    st[id] = min(st[id << 1] , st[id << 1 | 1]) ;
}

void down (int id) {
    if (lz[id] == 0 || L[id] == R[id]) return ;
    st[id << 1] += lz[id] ; lz[id << 1] += lz[id] ;
    st[id << 1 | 1] += lz[id] ; lz[id << 1 | 1] += lz[id] ;
    lz[id] = 0 ;
}

void update (int id , int u , int v , int val) {
    if (v < L[id] || R[id] < u || u > v) return ;
    if (u <= L[id] && R[id] <= v) {
        st[id] += val ;
        lz[id] += val ;
        return ;
    }
    down(id) ;
    update(id << 1 , u , v , val) ;
    update(id << 1 | 1 , u , v , val) ;
    st[id] = min(st[id << 1] , st[id << 1 | 1]) ;
}

int get (int id , int u , int v) {
    if (v < L[id] || R[id] < u || u > v) return oo ;
    if (u <= L[id] && R[id] <= v) return st[id] ;
    down(id) ;
    return min(get(id << 1 , u , v) , get(id << 1 | 1 , u , v)) ;
}

void solve() {
    cin >> n >> k ;
    for (int i = 0 ; i <= 4 * k ; ++ i) st[i] = lz[i] = 0 ;
    for (int i = 1 ; i <= k ; ++ i) cin >> a[i].fi ;
    for (int i = 1 ; i <= k ; ++ i) cin >> a[i].se ;
    sort(a + 1 , a + 1 + k) ;
    build(1 , 1 , k) ;
    for (int i = 1 ; i <= n ; ++ i) {
        cout << get(1 , 1 , k) << " " ;
        auto it = lower_bound(a + 1 , a + 1 + k , II(i + 1 , 0)) - a ;
        if (it > 1) update(1 , 1 , it - 1 , 1) ;
        if (it <= k) update(1 , it , k , -1) ;
    }
    cout << endl; ;
}

int32_t main() {
	int t;
	cin>>t;
	while (t--) solve();
}
