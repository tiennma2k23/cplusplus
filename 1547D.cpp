#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+5;
int a[maxn];
void solve()
{
    int n;
    cin >> n ;
    cout << 0 << " " ;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i] ;
        if (i == 1) continue ;
        int x = a[i - 1] ^ (a[i] & a[i - 1]) ;
        a[i] |= x ;
        cout << x << " " ;
    }
    cout << endl ;
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--) solve();
}
