#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  long long q;
  cin >> q;
long long x1 , y1 , z1 , x2 , y2 , z2 , ans , add;
  while(q --){
    ans=0;
     cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
     add = min(z1 , y2);
     ans += 2 * add;
     z1 -= add , y2 -= add;
     z2 = max(0ll , z2 - z1 - x1);
     y1 = max(0ll , y1 - y2);
     ans -= 2 * min(y1 , z2);
     cout << ans << endl;
  }
}
