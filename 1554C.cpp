#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n,m;
    cin >> n >> m ;
    if (n > m)
    {
        cout << 0<<endl ;
        return ;
    }
    int cur = 0, ans = 0 ;
    vector< int > v ;
    for (int i = 31 ; i >= 0 ; -- i)
    {
        if (n >> i & 1ll) cur += (1ll << i) ;
        else v.push_back(i) ;
    }
    reverse(v.begin(), v.end()) ;
    int last = v.back() ;
    for (auto i : v)
    {
        cur += (1ll << i) ;
        ans += (1ll << i) ;
        if (cur > m)
        {
            last = i ;
            break ;
        }
    }

    for (int i = 31 ; i >= 0 ; -- i)
    {
        if ((cur >> i & 1ll) && (ans >> i & 1ll))
        {
            if (cur - (1ll << i) > m)
            {
                cur -= (1ll << i) ;
                ans -= (1ll << i) ;

            }
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
    return 0;
}
