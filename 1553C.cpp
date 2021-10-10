#include<bits/stdc++.h>
#define int long long
using namespace std;

string s ;
int a[2], b[2], suff[2] ;

void solve()
{
    cin >> s ;
    a[0] = a[1] = b[0] = b[1] = 0 ;
    suff[0] = suff[1] = 5 ;
    for (int i = 0 ; i < 1ll*s.size() ; i++)
    {
        if (s[i] == '?') b[(i % 2)] ++ ;
        else a[(i % 2)] += (s[i] == '1') ;
        suff[(i % 2)] -- ;
        if (a[0] + b[0] > a[1] + suff[1] || a[1] + b[1] > a[0] + suff[0])
        {
            cout << i + 1 << endl ;
            return ;
        }
    }
    cout << 10<<endl ;
}

int32_t main()
{
    int t;
    cin >> t ;
    while (t--) solve();
}
