
#include<bits/stdc++.h>
#define int long long
using namespace std ;
const int maxn=2e5+1;
int a[maxn];
void solve()
{
    int n;
    cin >> n ;
    unordered_map< int, int > s ;
    int ans = 0 ;
    for (int i = 1 ; i <= n ; ++ i)
    {
        cin >> a[i];
        ans += s[a[i]] * (n - i + 1) ;
        s[a[i]] += i ;
    }
    for (int i=1; i<=n; i++) s[a[i]]=0;
    cout << ans << endl ;
}

int32_t main()
{
    int q;
    cin >> q;
    while (q -- ) solve();
}
