#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int even[2],odd[2];
void solve()
{
    cin >> s ;
    int n = s.size();
    even[0] = even[1] = odd[0] = odd[1] = 0 ;
    if (s[0] != '?') even[s[0] - '0'] ++ ;
    int i = 1, j = 0 ;
    int ans = 1 ;
    while (i < n)
    {
        if (i % 2) odd[s[i] - '0'] ++ ;
        else even[s[i] - '0'] ++ ;
        while (j < i && (min(odd[1], odd[0]) > 0 || min(even[1], even[0]) > 0) || min(even[1], odd[1]) > 0 || min(even[0], odd[0]) > 0)
        {
            if (j % 2==1) odd[s[j] - '0'] -- ;
            else even[s[j] - '0'] -- ;
            j ++ ;
        }
        ans += i - j + 1;
        i ++ ;
    }
    cout << ans << endl ;
}

int32_t main()
{
    int nt;
    cin >> nt;
    while (nt--) solve() ;
}
