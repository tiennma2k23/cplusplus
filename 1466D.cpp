
#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
using namespace std;
const ll N = 2e5 + 3;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
ll n , w[N] , con[N] , u , v , q;
vector<ll> g[N];
void dfs(ll u , ll p){
    for(ll v : g[u]){
      if(v != p) dfs(v , u) , con[u] ++;
    }
}
void solve(){
    cin >> n;
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i ++) cin >> w[i] , ans += w[i] , con[i] = 0 , g[i].clear();
    for(ll i = 1 ; i < n ; i ++){
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    dfs(1 , 0);
    vector<II> vt(n + 1);
    con[1] --;
    for(ll i = 1 ; i <= n ; i ++) vt[i] = II(w[i] , con[i]);
    sort(vt.begin() + 1 , vt.end() , greater<II> ());
    cout << ans << " ";
    ll x = 1;
    for(ll i = 1 ; i < n - 1 ; i ++){
      while(vt[x].second == 0 && x < n) x ++;
      ans += vt[x].first;
      vt[x].second --;
      cout << ans << " ";
    }
    cout << endl;
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
   cin >> q;
   while(q --) solve();
}
