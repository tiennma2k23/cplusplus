#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
using namespace std;
const ll maxn=1000;
int main()
{
    freopen("A.out","r",stdin);
    pair<ll,ll> p[maxn],p1[maxn];
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        ll a,b;
        cin>>a>>b;
        p[i]=II(a,b);
    }
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        ll a,b;
        cin>>a>>b;
        p1[i]=II(a,b);
    }
    for (ll i=1;i<=n;i++)
    {
        if (p[i]!=p1[i])
        {
            cout<<-1<<" "<<i<<endl;
            return 0;
        }
    }
    cout<<1<<endl;
}
