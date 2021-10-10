#include<bits/stdc++.h>

#define maxn 100005

using namespace std;
typedef long long ll;

int main(){
  int t;
  cin >> t;
  while (t--) {
    ll a, b;
    cin >> a >> b;

    sumxor = 0;

    if (a + 2 >= b) {
        for (ll i = a; i <= b; ++i)
          sumxor ^= i;

        cout << sumxor;
        return 0;
    }
    if (a&1) {
      sumxor ^= a;
      a++;
    }
    if (!(b&1)) {
      sumxor ^= b;
      b--;
    }
    sumxor ^= ((b - a) >> 2)&1;
    cout << sumxor << endl;
  }

  return 0;
}
