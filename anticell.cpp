#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+1,mod=1e9+7;

int n ;
vector< int > v ;
int dp[maxn], a[maxn] ;

int solvev (vector< int > a)
{
    int n = a.size() - 1 ;
    if (a[1] == -1) return 1 ;
    vector< vector< int > > pos(a.size(), vector< int > (55, -1)) ;
    vector< int > dp(a.size(), 0) ;
    dp[0] = 1 ;
    for (int i = 1 ; i <= n ; ++ i)
    {
        pos[i][a[i]] = i ;
        dp[i] = dp[i - 1] ;
        for (int j = a[i] + 1 ; j < 52 ; ++ j)
        {
            if (pos[i][j - 1] != -1) pos[i][j] = pos[pos[i][j - 1] - 1][j - 1] ;
            else break ;
            if (pos[i][j] != -1) dp[i] = (dp[i] + dp[pos[i][j] - 1]) % mod ;
        }
    }
    return dp[n] ;
}

int solven(int n)
{
    vector< vector < int > > v ;
    for (int i = 1 ; i <= n ; ++ i)
    {
        int x = 0 ;
        while (a[i] && a[i] % 2 == 0)
        {
            a[i] /= 2 ;
            x ++ ;
        }
        if (i == 1 || a[i] != a[i - 1])
        {
            v.push_back(vector< int > (1, 0)) ;
        }
        if (a[i] == 0) x = -1 ;
        v.back().push_back(x) ;
    }
    int ans = 1 ;
    for (auto a : v)
    {
        ans = (ans * solvev(a)) % mod ;
    }
    return ans ;
}

void solve()
{
    cin >> n ;
    for (int i = 1 ; i <= n ; ++ i) cin >> a[i] ;
    cout << solven(n) ;
}

int32_t main()
{
    solve();
}
