#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
struct Nodes
{
    ll a,b,c;
};
Nodes g[maxn];
bool cmp(Nodes a, Nodes b)
{
    return a.b<b.b;
}
int main()
{
    ll n,bcnn=1,tg=0,ans=0;;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>g[i].a;
    for (ll i=1;i<=n;i++)
    {
        cin>>g[i].b;
        bcnn= (bcnn*g[i].b)/(__gcd(bcnn,g[i].b));
    }
    for (ll i=1;i<=n;i++) g[i].c=g[i].a*bcnn/g[i].b;
    sort(g+1,g+1+n,cmp);
    for (ll i=1;i<=n;i++)
    {
        tg=tg+g[i].b;
        ans=ans+g[i].a*tg;
    }
    cout<<ans<<endl;
}
