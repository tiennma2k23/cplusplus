#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+1,inf=LLONG_MAX;
int pref[maxn][6] ;
string t[6] ;
string c[] = {"abc", "acb", "bca", "bac", "cba", "cab"} ;

int32_t main()
{
    int n, m ;
    string s ;
    cin >> n >> m ;
    cin >> s ;
    for (int i = 0 ; i < 6 ; i++)
    {
        t[i] = "" ;
        while (t[i].size() < n) t[i] += c[i] ;
        while (t[i].size() > n) t[i].pop_back() ;
    }
    for (int i = 1 ; i <= n ; i++)
        for (int j = 0 ; j < 6 ; j++)
            pref[i][j] = pref[i - 1][j] + (s[i - 1] != t[j][i - 1]) ;
    while (m--)
    {
        int l,r;
        cin >> l >> r ;
        int ans = inf ;
        for (int i = 0 ; i < 6 ; i++) ans = min(ans, pref[r][i] - pref[l - 1][i]) ;
        cout << ans << endl;
    }
}
