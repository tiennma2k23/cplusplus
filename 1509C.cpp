#include<bits/stdc++.h>
#define d dndt
#define abc 321
#define int long long
using namespace std;

const int N = 3e5 + 12;
const int Mod = 1e9 + 7;
const int oo = 1e18;
int a[N], d[2012][2012];

long long depe(int li, int ri)
{
#define l li
#define r ri
    if (l > r) return 0;
    if (l == r) return 0;
    if (d[l][r - 1] == -1) d[l][r - 1] = depe(l, r - 1);
    if (d[l + 1][r] == -1) d[l + 1][r] = depe(l + 1, r);
    return d[l][r] = min(d[l][r - 1]+a[r] - a[l], d[l + 1][r] + a[r] - a[l]);
}
void solve()
{
    int n;
    cin >> n ;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) d[i][j] = -1;
    for (int i=1; i<=n; i++) d[i][i] = 0;
    sort (a + 1, a + 1 + n);
    cout << depe(1, n)<<endl;
}
int32_t main()
{
    solve()
}
