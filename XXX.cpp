#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+1,mod=1e9+7;
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

void prepare()
{
    gt[0]=rf[0]=1;
    for (int i = 1 ; i <maxn ; i++) gt[i] = gt[i - 1] * i % mod ;
    rf[maxn-1] = _pow(gt[maxn-1], mod-2) ;
    for (int i = maxn-2 ; i >= 0 ; i--) rf[i] = rf[i + 1] * (i + 1) % mod ;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    prepare();
    int n,p;
    while(cin>>n>>p) cout<<C(p-1,n-1)<<'\n';
}
