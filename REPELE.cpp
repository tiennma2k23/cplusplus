#include<bits/stdc++.h>

using namespace std;

#define FORb(i , b , a) for (ll i = b ; i >= a ; i --)
#define FORa(i , a , b) for (ll i = a ; i <= b ; i ++)
#define fi first
#define sd second
#define pb push_back
#define pll pair<long long, long long>
#define FastRead() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0)

typedef long long ll;
typedef long double ld;

const ll N = 1e5 + 10;
const ll MOD = 998244353;

map<ll , ll> dd;
ll n , q , a[N] , dp[N];

int main(){
    cin >> n >> q;
    FORa(i , 1 , n){
    cin >> a[i];
    if(!dd[a[i]]) {
      dd[a[i]] = i;
      dp[i] = dp[i - 1];
    }
    else {
      dp[i] = max(dp[i - 1] , dd[a[i]]);
      dd[a[i]] = i;
    }
    }
    while(q --){
      ll l , r;
      bool flag = false;
      cin >> l >> r;
      if(l <= dp[r]) flag = true;
      if(flag) cout << "yes" << endl;
      else cout << "no" << endl;
    }
}
