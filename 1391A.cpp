#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
ll lt(ll a, ll p, ll n)
{
  long long t=a,kq=1;
  while (p>0)
  {
    if (p%2==1) kq=kq*t%n;
    t=t*t%n;
    p/=2;
  }
  return kq;
}
int main()
{
    ll n,res=1,i;
    cin >> n;
    for (i=1;i<=n;i++) res=(res*i)%mod;
    ll kq=lt(2,n-1,mod);
    cout << (res-kq+mod)%mod;
}
