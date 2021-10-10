#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=8001,mod=1e9+7,N=2e5+1;
set<int> st[maxn];
map<II,int> cnt;
int gt[maxn],rf[maxn],a[N],b[N];
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
    prepare();
    int n,ans=0,maxx=0;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i]>>b[i],maxx=max(maxx,a[i]),maxx=max(maxx,b[i]),cnt[II(a[i],b[i])]++;
    if (n<=5000)
    {
        int ans=0;
        for (int i=1;i<=n;i++)
            for (int j=i+1;j<=n;j++) ans+=C(a[i]+a[j],a[i]+a[j]+b[i]+b[j]),ans%=mod;
        cout<<ans<<endl;
    }
    else
    {
        int ans=0;
        for (int i=1;i<=n;i++)
        {
            cnt[II(a[i],b[i])]--;
            for (int j=1;j<=maxx;j++)
                for (int j1=j;j1<=maxx;j1++)
            {
                ans+=cnt[II(j,j1)]*C(a[i]+j,a[i]+j+b[i]+j1);
                ans%=mod;
            }
        }
        cout<<ans<<endl;
    }
}
