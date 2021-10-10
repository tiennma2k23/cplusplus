#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf = LLONG_MAX,maxn=1e6+1;
int n ;
int a[maxn][2] ;
int suff[maxn] ;

void solve()
{
    int n;
    cin >> n ;
    suff[n + 1] = 0 ;
    for (int i = 0 ; i < 2 ; i++)
        for (int j = 1 ; j <= n ; j++)
            cin >> a[j][i] ;
    for (int i = n ; i > 0 ; i--)
    {
        suff[i] = suff[i + 1] + a[i][0] ;
    }
    int pref = 0 ;
    int ans = inf ;
    for (int i = 1 ; i <= n ; i++)
    {
        ans = min(ans, max(pref, suff[i + 1])) ;
        pref += a[i][1] ;
    }
    cout << ans << endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
