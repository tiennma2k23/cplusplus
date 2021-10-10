#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5;
ll a[maxn];
int main()
{
    ll l,n;
    cin>>l>>n;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    ll ans=a[1];
    for (ll i=2;i<=n;i++)
    {
        ll t=a[i]-a[i-1];
        ans=max(ans,t/2);
    }
    ans=max(ans,l-a[n]);
    cout<<ans<<endl;
}
