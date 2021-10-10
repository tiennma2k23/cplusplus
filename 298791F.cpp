#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+5;
ll dem,b[N],minPrime[N];
map<ll,ll> d;
void sang()
{
    for (ll i=2; i*i<=N; i++)
    {
        if (!minPrime[i])
        {
            for (ll j=i*i; j<=N; j+=i) minPrime[j]=i;
        }
    }
    for (ll i=2; i<=N; i++) if (!minPrime[i]) minPrime[i]=i;
}

void ptich(ll x)
{
    while (x>1)
    {
        if (d[minPrime[x]]==0)
        {
            dem++;
            b[dem]=minPrime[x];
        }
        d[minPrime[x]]++;
        x/=minPrime[x];
    }
}
int main()
{
    sang();
    ll q;
    cin>>q;
    while (q--)
    {
        ll m;
        cin>>m;
        dem=0;
        ll tmp;
        ll ans=1,ans2=1;
        tmp=m;
        ptich(tmp);
        tmp=m+1;
        ptich(tmp);
        tmp=m+2;
        ptich(tmp);
        for (ll i=1; i<=dem; i++)
        {
            ans*=(d[b[i]]*2+1);
            ans2*=(d[b[i]]+1);
            d[b[i]]=0;
        }
        ans=(ans+1)/2-ans2;
        cout<<ans<<endl;
    }
}
