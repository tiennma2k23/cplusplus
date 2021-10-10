#include<bits/stdc++.h>
#define ll long long
#define _lower_bound vitriphantulonhonhoacbangkey
#define _upper_bound vitriphantulonhonkey
using namespace std;
vector<ll> a(1001),b(1001),c(1001),d(1001),v;

ll _lower_bound(ll x)
{
    int l=0,r=v.size()-1,pos=0;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (v[mid]<x) l=mid+1;
        else pos=mid,r=mid-1;
    }
    return pos;
}

ll _upper_bound(ll x)
{
    int l=0,r=v.size()-1,pos=v.size();
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (v[mid]<=x) l=mid+1;
        else pos=mid,r=mid-1;
    }
    return pos;
}

int main()
{
    ll k,n;
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++) cin>>b[i];
    for (ll i=1;i<=n;i++) cin>>c[i];
    for (ll i=1;i<=n;i++) cin>>d[i];
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++) v.push_back(a[i]+b[j]);
    sort(v.begin(),v.end());
    ll ans=0;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++)
    {
        ll key=k-c[i]-d[j];
        ll pos=_lower_bound(key);
        if (v[pos]==key)
        {
            ll pos2=_upper_bound(key);
            ans+=pos2-pos;
        }
    }
    cout<<ans<<endl;
}
