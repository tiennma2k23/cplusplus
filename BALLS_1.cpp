
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=5e5+1;
ll a[maxn],d[maxn];
vector<ll> v;
int main()
{
    ll n,ans=0;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]++;
        if (d[a[i]]==1) v.push_back(a[i]);
    }
    for (auto u:v)
    {
        ans+=(d[u]*(d[u]-1))/2;
    }
    for (ll i=1;i<=n;i++)
    {
        cout<<ans-d[a[i]]+1<<endl;
    }
}
