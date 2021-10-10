#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,mod=666013;
int gt[maxn],rf[maxn];
int sqr(int x)
{
    return x*x;
}

int _pow(int a, int b)
{
    if (b == 0) return 1 % mod;
    else if (b % 2 == 0)
        return sqr(_pow(a, b/2)) % mod;
    else
        return a * (sqr(_pow(a, b/2)) % mod) % mod;
}

int C (int k, int n)
{
    if (n < k || k < 0) return 0 ;
    return (gt[n] * rf[k] % mod) * rf[n - k] % mod ;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    if (n % 2)
    {
        int res = 1 ;
        for (int i=0; i<=n; i+=2) res = (res+C(i,n)) % mod ;
        int ans=1 ;
        for (int i=1; i<=k ; i++) ans = (ans * res) % mod ;
        cout<<ans<<endl ;
    }
    else
    {
        int res=0;
        for (int i=0; i<n; i += 2) res=(res+C(i, n))%mod ;
        int ans=1 ;
        for (int i = 1 ; i <=k ; i++) ans = (ans * res) % mod ;
        int pre = 1 ;
        for (int i = 1 ; i <=k ; i++)
        {
            ans = (ans + (pre * _pow(_pow(2, n), k - i) % mod)) % mod ;
            pre = (pre * res) % mod ;
        }
        cout << ans << endl ;
    }
}
int32_t main()
{
    gt[0] = gt[0] = 1 ;
    for (int i = 1 ; i <maxn ; i++) gt[i] = gt[i - 1] * i % mod ;
    rf[maxn-1] = _pow(gt[maxn-1], mod-2) ;
    for (int i = maxn-2 ; i >= 0 ; i--) rf[i] = rf[i + 1] * (i + 1) % mod ;
    int q;
    cin>>q;
    cout<<C(1,2)<<endl;
    while (q--) solve();
}
