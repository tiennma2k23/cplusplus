#include <bits/stdc++.h>
using namespace std;

long long i, n, ans, vtr, vtb, dd1[200002], dd2[200002], k, luu;
string s;

int main() {
    cin >> s;
    n = s.length();
    s = s + s;
    s = ' ' + s;
    for (i = 1; i <= 2 * n; i++) {
        if (s[i] == 'r') {
            vtr = i;
            dd1[i] = vtb;
        }
        if (s[i] == 'b') {
            vtb = i;
            dd1[i] = vtr;
        }
        if (s[i] == 'w')
            dd1[i] = min (vtb, vtr);
    }
    vtr = 2 * n + 1;
    vtb = 2 * n + 1;
    for (i = 2 * n; i >= 1; i--) {
        if (s[i] == 'r') {
            vtr = i;
            dd2[i] = vtb;
        }
        if (s[i] == 'b') {
            vtb = i;
            dd2[i] = vtr;
        }
        if (s[i] == 'w')
            dd2[i] = max (vtb, vtr);
    }
    for (i = 1; i <= n; i++) {
        k = dd2[i] - i + i + n - 1 - dd1[i + n - 1];
        k = min (k, n);
        if (k > ans) {
            ans = k;
            luu = i;
        }
    }
    cout << ans;
}
