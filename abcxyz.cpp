#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FORd(i,a,b) for(int i=a;i>=b;i--)
#define fi first
#define se second
#define II pair<ll,ll>
#define FastRead ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
const int N=1e6;
const ll maxN=1e18+10;
const ll MOD=1e9+7;
//ll dd[N],f[N],prime[N];
vector<ll> dd(N+5),f(N+5),prime(N+5);
ll POW (ll a, ll p, ll n)
{
    ll ans=1;
    while (p!=0)
    {
        if (p&1) ans=(ans*a)%n;
        a=(a*a)%n;
        p/=2;
    }
    return ans;
}
void sieve()
{
    for (int i=2; i*i<=N; ++i)
        if (!prime[i])
            for (int j=i*i; j<=N; j+=i)
                if (!prime[i]) prime[j]=i;
    for (int i=2;i<=N;++i) if (!prime[i]) prime[i]=i;

}
/*void fastscan(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar()) number = number *10 + c - 48;
    if (negative)
        number *= -1;
}*/
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE // */
    FastRead
    int t;
    //fastscan(t);
    scanf("%ld" ,&t);
    sieve();
    f[1]=1;
    FOR(i,2,N)
    {
        ll cnt=i,kq=1,dem=0,so=1,tmp=prime[i];
        while (cnt>1)
        {
            ll k=prime[cnt];
            if (k==tmp) dem++;
            else
            {
                so*=(dd[tmp]+1);
                so%=MOD;
                dd[tmp]=(dd[tmp]+dem)%MOD;
                //kq=kq*(dd[tmp]+1)%MOD*POW(so,MOD-2,MOD)%MOD;
                kq=(kq*(dd[tmp]+1))%MOD;
                dem=1;
                tmp=k;
            }
            cnt/=k;
        }
        so*=(dd[tmp]+1);so%=MOD;
        dd[tmp]=(dd[tmp]+dem)%MOD;
        kq=(kq*(dd[tmp]+1)%MOD)%MOD;
        kq=(kq*(POW(so,MOD-2,MOD)))%MOD;
        f[i]=(f[i-1]*kq)%MOD;
    }
    while (t--)
    {
        int n;
        //fastscan(n);
        scanf("%ld",&n);
        printf("%ld\n",f[n]);
    }
}
