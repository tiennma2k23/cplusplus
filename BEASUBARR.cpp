#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
ll a[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,ans=0;
        cin>>n;
        for (ll i=1;i<=n;i++) cin>>a[i];
        for (ll i=1;i<=n;i++)
        {
            ll minn=a[i],maxx=a[i];
            for (ll j=i;j<=n;j++)
            {
                minn=min(minn,a[j]);
                maxx=max(maxx,a[j]);
                ans+=(maxx-minn==abs(a[i]-a[j]));
            }
        }
        cout<<ans<<endl;
    }
}
