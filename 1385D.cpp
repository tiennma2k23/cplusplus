#include<bits/stdc++.h>
using namespace std;
const long long MAXN=2e5;
string a;
int n;
int dp(int i, int j, int c) {
  if (i + 1 == j)
    return a[i] != c;
  int m = (i + j) / 2;
  int l = 0, r = 0;
  for (int id = i; id < m; ++id)
    l += (a[id] != c);
  for (int id = m; id < j; ++id)
    r += (a[id] != c);
  return min(dp(i, m, c + 1) + r, l + dp(m, j, c + 1));
}

int main(){
  long long q;
  cin >> q;
  while (q--)
  {
        cin >> n;
        cin >> a;
        cout << dp(0, n, 'a') << endl;
  }
}
// Yêu 10A5CVP <3
