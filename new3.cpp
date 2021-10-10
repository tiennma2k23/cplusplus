#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t,a[1000001];
map<ll,ll> d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,q;
    cin>>n>>q;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    while (q--)
    {
        ll x,y;
        cin>>x>>y;
        ll t=0;
        for (ll i=1;i<=n;i++)
        {
            if (a[i]==x) a[i]=y;
            t+=a[i];
        }
        cout<<t<<endl;
    }
}
