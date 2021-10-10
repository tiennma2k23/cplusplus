#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
ll n,a[maxn],k,ans=LLONG_MAX;
bool good(ll sum)
{
    ll s=0,dem=0;
    for (ll i=1;i<=n;i++)
    {
        s+=a[i];
        if (s>sum) dem++,s=a[i];
        if (a[i]>sum) return false;
    }
    dem++;
    return dem<=k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    ll r=1,l=1;
    while (!good(r))
    {
        l=r;
        r*=2;
    }
    while (l<=r)
    {
        ll mid=(l+r)/2;
        if (good(mid))
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}
