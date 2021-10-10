#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=4e6;

int n ;
int siv[maxn  + 20] ;
int dp[109][109] ;
int f[109][2] ;

void solve()
{
    cin >> n ;
    int N = maxn  ;
    vector< int > prime ;
    for (int i = 2 ; i <= N ; i++)
    {
        if (siv[i]) continue ;
        prime.push_back(i) ;
        for (int j = i + i ; j <= N ; j += i) siv[j] = 1 ;
    }
    vector< int > v ;
    for (int p : prime)
    {
        if (n % p == 0)
        {
            v.push_back(0) ;
            while (n % p == 0)
            {
                n /= p ;
                v.back() ++ ;
            }
        }
    }
    if (n > 1) v.push_back(1) ;
    dp[0][0] = 1 ;
    for (int i = 1 ; i <= 100 ; i++)
    {
        for (int j = 0 ; j <= 100 ; j++)
        {
            dp[i][j] = dp[i - 1][j] ;
            if (j >= i) dp[i][j] += dp[i][j - i] ;
        }
    }
    sort(v.begin(), v.end()) ;
    int k = v.back() ;
    v.push_back(0) ;
    reverse(v.begin(), v.end()) ;
    f[0][0] = 1 ;
    for (int i = 1 ; i < v.size() ; i++)
    {
//        cout << v[i] << " " << dp[k][v[i]] << "\n" ;
        f[i][1] = f[i - 1][1] * dp[k][v[i]] ;
        f[i][0] = f[i - 1][0] * (dp[k][v[i]] - 1) ;
        if (v[i] == k)
        {
            f[i][1] += f[i - 1][0] ;
        }
    }
    cout << f[v.size() - 1][1] ;
}

int32_t main()
{
    solve();
}
