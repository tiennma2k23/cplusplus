#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> II;
const int N = 2e5 + 2;
const ll MOD = 12345677;
const ll INF = 2e9;
int n , m , d[N] , x , y , ans = 1;
vector<int> vt , tmp;
set<int> S;
map<II , bool> mp;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cin >> n >> m;
   for(int i = 1 ; i <= m ; i ++){
      cin >> x >> y;
      mp[II(x , y)] = true;
      mp[II(y , x)] = true;
      S.insert(x);
      S.insert(y);
   }
   vt = vector<int> (S.begin() , S.end());
   for(int u : vt){
      for(int v : tmp){
         if(mp[II(u , v)]||mp[II(v,u)]){
            ck=false;
            break;
         }
      }
    if (!ck)
    {
        dem++;
        tmp.clear();
    }
    tmp.push_back(u);
    ck[u]=dem;
   }
   cout << ans << endl;
}
