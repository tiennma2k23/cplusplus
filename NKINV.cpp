#include<bits/stdc++.h>
#define ll long long
using namespace std;
//ifstream fi("INVERS.inp");
//ofstream fo("INVERS.out");
const ll maxn=6e4+5,INF=LLONG_MAX;
ll a[maxn],n,t,d[maxn],maxx=-INF;
void _insert(ll x)
{
    while (x<maxn)
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
    cin>>n;
    for (ll i=1;i<=n;++i) cin>>a[i];
    for (ll i=n;i>=1;--i)
    {
        t+=solve(a[i]-1);
        //cerr<<t<<endl;
        _insert(a[i]);
    }
    cout<<t<<endl;
}
