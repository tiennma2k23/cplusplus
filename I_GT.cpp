#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6,M=1e9+7;
//ll d1[N+5],dem,b[N+5],d[N+5],minPr[N+5],Mod[N+5],f[N+5];
ll dem;
vector<ll> d1(N+5),b(N+5),d(N+5),minPr(N+5),Mod(N),f(N+5);

ll div(ll x)
{
    ll p=M-2;
    ll tich=x;
    ll du=1;
    while (p>0)
    {
    if (p%2==1) du=(du*tich)%M;
    tich=(tich*tich)%M;
    p/=2;
    }
    return du;
}
void sieve()
{
    for (ll i=2;i*i<=N;++i)
    {
        if (!minPr[i])
        {
            for (ll j=i*i;j<=N;j+=i) if (!minPr[j]) minPr[j]=i;
        }
    }
    for (ll i=2;i<=N;++i) if (!minPr[i]) minPr[i]=i;
}

void create()
{
    f[0]=1;
    for (ll i=1;i<=N;++i)
    {
        ll tmp=i;
        ll dem=0;
        while (tmp>1)
        {
            ll k=minPr[tmp];
            d1[k]++;
            if (d1[k]==1)
            {
                dem++;
                b[dem]=k;
            }
            tmp/=k;
        }
        f[i]=f[i-1];
        ll t=1;//chia
        ll t1=1;//nhan
        for (ll j=1;j<=dem;++j)
        {
            t=(t*(d[b[j]]+1))%M;
            d[b[j]]=(d[b[j]]+d1[b[j]]);
            t1=(t1*(d[b[j]]+1))%M;
            d1[b[j]]=0;
        }
        ll k=div(t);
        f[i]=(f[i]*k)%M;
        f[i]=(f[i]*t1)%M;
    }
}

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //freopen("ABC.inp","r",stdin);
    //freopen("ABC.out","w",stdout);
    sieve();
    //prepare();
    create();
    ll q,x;
    cin>>q;
    while (q--)
    {
         //scanf("%lld", &x);
        //printf("%lld\n", f[x]);
        cin>>x;
        cout<<f[x]<<'\n';
    }
    return 0;
}
