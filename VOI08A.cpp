#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
ll a[maxn],b[maxn];
int main()
{
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+1+n);
    a[0]=a[1];
    a[n+1]=a[n];
    ll ans=LLONG_MAX;
    for (ll i=1;i<=n;i++)
    {
        ll key=-b[i];
        ll vt=upper_bound(a+1,a+1+n,key)-a-1;
        ans=min({ans,abs(b[i]+a[vt]),abs(b[i]+a[(vt<=n)?vt+1:n])});
    }
    cout<<ans<<endl;
}
