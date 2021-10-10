#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 3e5 + 5 ;
int n, q, k ;
string s ;
int p[maxn], ST[maxn], c[maxn][2],poww[25] ;
void create(int i)
{
    if (c[i][0] == 0)
    {
        if (s[i]=='?') ST[i]=2;
        else ST[i]=1;
        return ;
    }
    create(c[i][0]) ;
    create(c[i][1]) ;
    if (s[i] == '?') ST[i] = ST[c[i][0]] + ST[c[i][1]] ;
    else ST[i] = ST[c[i][s[i] - '0']] ;
}

void solve()
{
    int i ;
    char ch ;
    cin >> i >> ch ;
    s[i] = ch ;
    while (true)
    {
        if (c[i][0] == 0)
        {
            if (s[i]=='?') ST[i]=2;
            else ST[i]=1;
        }
        else
        {
            if (s[i] == '?') ST[i] = ST[c[i][0]] + ST[c[i][1]] ;
            else ST[i] = ST[c[i][s[i] - '0']] ;
        }
        if (i == n) break ;
        i = p[i] ;
    }
    cout << ST[n] << endl;
}

int32_t main()
{
    poww[0]=1;
    for (int i=1; i<=20; i++) poww[i]=poww[i-1]*2;
    cin >> k >> s >> q ;
    n = s.length();
    s = " " + s ;
    for (int i = 0 ; i <= n ; ++ i)
    {
        c[i][0] = c[i][1] = 0 ;
        p[i] = 0 ;
    }
    p[n] = 0 ;
    k -- ;
    int curr = poww[k], add = 1 ;
    for (int i = 1 ; i < n ; i += 2)
    {
        if (i >= curr)
        {
            k -- ;
            curr += poww[k] ;
            add = 1 ;
        }
        p[i] = p[i + 1] = curr + add ;
        add ++ ;
    }
    for (int i = 1 ; i < n ; ++ i)
    {
        c[p[i]][((i - 1) % 2)] = i ;
    }
    create(n) ;
    while (q -- ) solve();
}
