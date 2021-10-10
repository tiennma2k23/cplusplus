#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 1;
const double w = 0.0001;
double k , d[N] , f[N] , l = 0 , r = 1;
ll n , t;
bool ok(double x){
   f[1] = d[1] + x;
   for(int i = 2 ; i <= n ; i ++){
    if(f[i - 1] + k < d[i]){
    if(f[i - 1] + k < d[i] - x) return false;
    else f[i] = f[i - 1] + k;
    }
   else{
    if(d[i] + x >= f[i - 1] + k) f[i] = f[i - 1] + k;
    else f[i] = d[i] + x;
   }
   }
   return true;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> k >> n;
  for(int i = 1 ; i <= n ; i ++) cin >> d[i];
  while(!ok(r)) l = r , r *= 2;
  t = (int)log2((r - l + 1) / w) + 10;
  for(int i = 1 ; i <= t ; i ++){
    double mid = (l + r) / 2;
    if(ok(mid)) r = mid;
    else l = mid;
  }
  cout.precision(6);
  cout << fixed << r << endl;
}
