#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e5+1,maxn=1e5+5;
ll minPrime[N],a[maxn],t,ans;
void sang()
{
    minPrime[1]=1;
for (ll i = 2; i * i <= N; ++i) {
    if (minPrime[i] == 0) {
        for (ll j = i * i; j <= N; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
}
for (ll i = 2; i <= N; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}
}

ll dem(ll x)
{
    ll res=0;
    while (x>1)
    {
        res++;
        x/=minPrime[x];
    }
    return res;
}
int main()
{
    sang();
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    ll uc=a[1];
    for (ll i=2;i<=n;i++) uc=__gcd(uc,a[i]);
    for (ll i=1;i<=n;i++)
    {
        t=a[i]/uc;
        ans+=dem(t);
    }
    cout<<ans<<endl;
}
