#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> II;
const int N = 6e5 + 3;
const ll INF = 1e18;
const int MOD = 998244353;

int n , m , ans , choose[N];
II lazy[4 * N] , ST[4 * N] , dp[N];
vector<II> g[N];
vector<int> ord;

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

void trace(int id){
    if(id == 0) return;
    choose[id] = true;
    trace(dp[id].second);
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cin >> n >> m;
   for(int i = 1 ; i <= m ; i ++){
         int id , l , r;
         cin >> id >> l >> r;
         g[id].push_back(II(l , r));
         ord.push_back(l);
         ord.push_back(r);
   }
   sort(ord.begin() , ord.end());
   int sz = ord.size();
   for(int i = 1 ; i <= n ; i ++){
         for(auto x : g[i]){
            int L = lower_bound(ord.begin() , ord.end() , x.first) - ord.begin() + 1;
            int R = lower_bound(ord.begin() , ord.end() , x.second) - ord.begin() + 1;
            II f = get(1 , 1 , sz , L , R);
            dp[i] = max(dp[i] , II(f.first + 1 , f.second));
            ans = max(ans , dp[i].first);
         }
         for(auto x : g[i]){
            int L = lower_bound(ord.begin() , ord.end() , x.first) - ord.begin() + 1;
            int R = lower_bound(ord.begin() , ord.end() , x.second) - ord.begin() + 1;
            update(1 , 1 , sz , L , R , II(dp[i].first , i));
         }
   }
   cout << n - ans << endl;
   for(int i = 1 ; i <= n ; i ++){
         if(dp[i].first == ans){
                  trace(i);
                  break;
         }
   }
   for(int i = 1 ; i <= n ; i ++)
         if(!choose[i]) cout << i << " ";
   return 0;
}
