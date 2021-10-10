
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;

void solve()
{
    int n;
    cin >> n ;
    unordered_map< int, int > cnt ;
    int ans = 0 ;
    for (int i = 1; i <= n ; i++)
    {
        int a;
        cin >> a ;
        ans += cnt[a - i] ;
        cnt[a - i] ++ ;
    }
    cout << ans <<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
