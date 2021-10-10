#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll d[100],d1[100];
int main()
{
    ll n;
    cin>>n;
    ll ans=0;
    for (ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        ans+=d[(11-x)],ans+=d[x];
        d[x]++;
    }
    cout<<ans<<endl;
}
