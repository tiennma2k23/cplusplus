#include<bits/stdc++.h>
using namespace std;

const long long inf = 1e12;
const int mxN = 100000;
const int mod = 1e9 + 7;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n; cin >> n;
  array<int, 2> a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i][0] >> a[i][1];
  }
  sort(a, a + n);

  long long cur = a[0][0], res = 0;
  priority_queue< pair<int, int> > pq;
  for (int i = 0; i < n; i++) {
    if (a[i][0] <= cur) {
      pq.push({-a[i][1], a[i][0]});
    }
    else {
      if (!pq.empty()) {
        while (!pq.empty() && a[i][0] > cur) {
          auto u = pq.top(); pq.pop();
          cur -= u.first;
          res += cur - u.second;
        }
      }
      if (a[i][0] > cur) {
        cur = a[i][0];
      }
      pq.push({-a[i][1], a[i][0]});
    }
  }

  while (!pq.empty()) {
    auto u = pq.top(); pq.pop();
    cur -= u.first;
    res += cur - u.second;
  }

  cout << res / n << endl;

  return 0;
}

