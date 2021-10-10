
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=3e5+1;
int a[maxn] ;
void solve()
{
    int n,q;
    string s;
    cin >> n >> q >>s ;
    int mult = 1 ;
    for (int i = 1 ; i <= n ; i++)
    {
        if (s[i - 1] == '+') a[i] = a[i - 1] + mult ;
        else a[i] = a[i - 1] - mult ;
        mult *= -1 ;
    }

    while (q--)
    {
        int l,r;
        cin >> l >> r ;
        if (a[r] - a[l - 1] == 0) cout << 0<<endl ;
        else if ((r - l) % 2 == 0) cout << 1<<endl ;
        else cout << 2<<endl;
    }
}

int32_t main()
{
    int t ;
    cin >> t ;
    while (t--) solve();
}
