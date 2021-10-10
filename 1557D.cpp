
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
#define left _left
#define right _right
#define L _left
#define R _right
#define lz lazy
using namespace std ;

const int maxn=3e5+1;
vector< II > gr[maxn] ;
int f[maxn] , pre[maxn] , used[maxn] ;
int left[maxn << 3] , right[maxn << 3] ;
II ST[maxn << 3] , lazy[maxn << 3] ;

void build (int id , int l , int r) {
    left[id] = l ; right[id] = r ;
    ST[id] = lazy[id] = II(0ll,0ll) ;
    if (l == r) return ;
    int mid = (l + r) /2 ;
    build(id << 1 , l , mid) ;
    build(id << 1 | 1 , mid + 1 , r) ;
}

void upd (II &a , II b) {
    if (a.fi < b.fi) a = b ;
}

void down(int id , int l , int r){
    ST[id] = max(ST[id] , lazy[id]);
    if(l != r){
         lazy[id * 2] = max(lazy[id * 2] , lazy[id]);
         lazy[id * 2 + 1] = max(lazy[id * 2 + 1] , lazy[id]);
    }
    lazy[id] = II(0 , 0);
}

void update(int id , int l , int r , int u , int v , II val){
    down(id , l , r);
    if(r < u || v < l) return;
    if(u <= l && r <= v){
         ST[id] = max(ST[id] , val);
         if(l != r){
                  lazy[id * 2] = max(lazy[id * 2] , val);
                  lazy[id * 2 + 1] = max(lazy[id * 2 + 1] , val);
         }
         return;
    }
    int mid = l + r >> 1;
    update(id * 2 , l , mid , u , v , val);
    update(id * 2 + 1 , mid + 1 , r , u , v , val);
    ST[id] = max(ST[id * 2] , ST[id * 2 + 1]);
}

II get(int id , int l , int r , int u , int v){
    down(id , l , r);
    if(r < u || v < l) return II(0 , 0);
    if(u <= l && r <= v) return ST[id];
    int mid = l + r >> 1;
    return max(get(id * 2 , l , mid , u , v) , get(id * 2 + 1 , mid + 1 , r , u , v));
}

void solve() {
    int n,m;
    cin >> n >> m ;
    vector<int> v;
    v.clear();
    while (m--) {
        int i,l,r;
        cin >> i >> l >> r ;
        gr[i].push_back({l , r}) ;
        v.push_back(l) ;
        v.push_back(r) ;
    }
    sort(v.begin() , v.end()) ;
    v.resize(unique(v.begin() , v.end()) - v.begin()) ;
    for (int i = 1 ; i <= n ; ++ i) {
        for (auto &it : gr[i]) {
            it.fi = lower_bound(v.begin() , v.end() , it.fi) - v.begin() + 1 ;
            it.se = lower_bound(v.begin() , v.end() , it.se) - v.begin() + 1 ;
            //update(1 , 1 , sz , L , R , II(dp[i].first , i));
        }
    }

    //build(1 , 1 , v.size()) ;
    int sz=v.size();
    int last = 0 ;
    for (int i = 1 ; i <= n ; i++) {
        f[i] = 0 ;
        for (auto it : gr[i]) {
            II curr = get(1 ,1,sz, it.fi , it.fi) ;
            if (f[i] < curr.fi + 1) {
                f[i] = curr.fi + 1 ;
                pre[i] = curr.se ;
            }
        }
        for (auto it : gr[i]) {
            update(1 , 1,sz,it.fi , it.se , {f[i] , i}) ;
        }
        if (f[i] > f[last]) last = i ;
    }

    cout << n - f[last] << endl;
    while (last) {
        used[last] = 1 ;
        last = pre[last] ;
    }

    for (int i = 1 ; i <= n ; ++ i)
        if (!used[i]) cout << i << " " ;
}

int32_t main() {
	solve();
}
