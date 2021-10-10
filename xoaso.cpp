#include<bits/stdc++.h>
#define ll long long
#define maxn 100001
using namespace std;
ll a[maxn];
map<ll,ll> d;
int main()
{
    ll n,ans=LLONG_MIN,i,k;
    cin>>n>>k;
    for (i=1;i<=n;i++) cin>>a[i];
    ll l=1;
    ll r=1;
    ll cnt=0;
    while (r<=n)
    {
        while (cnt<=k+1&&r<=n)
        {
            if (d[a[r]]==0) cnt++;
            d[a[r]]++;
            ans=max(ans,d[a[r]]);
            r++;
        }
        d[a[l]]--;
        if (d[a[l]]==0) cnt--;
        l++;
    }
    cout<<ans<<endl;
}
