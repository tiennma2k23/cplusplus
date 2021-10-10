//1545158451
//iloveyou
#include<bits/stdc++.h>
#define left le
#define right ri
#define int long long
using namespace std ;
const int maxn=5010;
int t, n ;
int a[maxn], b[maxn], cl[maxn][maxn] ;
void solve()
{
    int n;
    cin >> n ;
    int ans = 0 ;
    for (int i = 1 ; i <= n ; i++) cin >> a[i] ;
    for (int i = 1 ; i <= n ; i++) cin >> b[i] ;
    for (int i = 1 ; i <= n ; i++) ans+=a[i]*b[i];
    for (int i = 1 ; i <= n ; i++)
        for (int j = 1 ; j <= n ; j++)
            cl[i][j] = a[i] * (b[j] - b[i]) ;
    int res = 0 ;
    for (int i = 1 ; i <= n ; i++)
    {
        int le = i - 1, ri = i + 1 ;
        int tmp = 0 ;
        while (le > 0 && ri <= n)
        {
            tmp += cl[le][ri] + cl[ri][le] ;
            res = max(res, tmp) ;
            le -- ;
            ri ++ ;
        }
    }
    for (int i = 1 ; i <= n ; ++ i)
    {
        int le = i, ri = i + 1 ;
        int tmp = 0 ;
        while (le > 0 && ri <= n)
        {
            tmp += cl[le][ri] + cl[ri][le] ;
            res = max(res, tmp) ;
            le -- ;
            ri ++ ;
        }
    }
    int kq=ans+res;
    cout << kq << endl ;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}
