#include<bits/stdc++.h>
#define ll long long
using namespace std;
ifstream fi("INVERS.inp");
ofstream fo("INVERS.out");
const ll maxn=6e5+5;
ll a[maxn],n,t,d[maxn];
void _insert(ll x)
{
    while (x<=n)
    {
        d[x]++;
        x+=x&(-x);
    }
}
ll solve(ll x)
{
    ll res=0;
    while (x>0)
    {
        res+=d[x];
        x-=x&(-x);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    fi>>n;
    for (ll i=1;i<=n;++i) fi>>a[i];
    _insert(a[n]);
    for (ll i=n-1;i>=1;-)
    {
        t+=solve(a[i]);
        _insert(a[i]);
    }
    fo<<t<<endl;
}
