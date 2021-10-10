
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,mod=998244353;
int rf[maxn],gt[maxn],a[maxn];
map<int,int> cnt;

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
void solve()
{
    int n,maxx=-1;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        maxx=max(maxx,a[i]);
    }
    int cnt1 = 0, cnt2 = 0 ;
    for (int i = 1 ; i <= n ; i++)
    {
        if (a[i] == maxx - 1) cnt1 ++ ;
        if (a[i] < maxx - 1) cnt2 ++ ;
    }
    sort(a+1,a+1+n);
    int ans=gt[n];
    if (cnt1 + cnt2 < n - 1)
    {
        cout<<ans<<endl;
        return;
    }
    else
    {
        for (int i=1; i<=n; i++) cnt[a[i]]=0;
        for (int i=0;i<=cnt2;i++)
        {
            res=(res+((C(i,cnt2)*gt[cnt1+i])%mod)*gt[cnt2-i]%mod)%mod ;
        }
        ans=ans-res+mod;
        ans%=mod;
        cout<<ans<<endl;
    }

}

int32_t main()
{
    prepare();
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
