#include <bits/stdc++.h>
using namespace std;
#define int long long

void ok(int x, int y)
{
    int cnt = __gcd(x, y);
    y = y / cnt;
    cout <<(y-1) * cnt;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    if(n==m)
    {
        cout << 0;
        return;
    }
    if(n > m)
        n = n - m;
    ok(n, m);
}

int32_t main()
{
    solve();
}
