#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define maxn 200010

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;

    while (t--) {
      int n; cin >> n;
      vector< ll > a(n);
      ll total = 0;
      for (int i = 0; i < n; ++i) cin >> a[i], total = total + a[i];
      ll p = (total - 1) / (n - 1) + 1;
      ll Max = *max_element(a.begin(), a.end());
      if (Max == 0) {
        cout << 0 << '\n';
        continue;
      }
      if (p < Max)
        cout << Max * (n - 1) - total << '\n';
      else cout << p * (n - 1) - total << '\n';
    }

    //return 0;
}
