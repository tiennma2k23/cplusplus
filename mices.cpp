
#include<bits/stdc++.h>
#define ABC"mices"
#define ll long long
using namespace std;
ll a[10010],b[10010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(ABC ".inp","r",stdin);
    freopen(ABC ".out","w",stdout);
    ll nt;
    cin>>nt;
    while (nt--)
    {
        ll n;
        cin>>n;
        for (ll i=1;i<=n;i++) cin>>a[i];
        for (ll i=1;i<=n;i++) cin>>b[i];
        ll ans=0;
        sort(a+1,a+1+n);
        sort(b+1,b+1+n);
        for (ll i=1;i<=n;i++) ans=max(ans,abs(a[i]-b[i]));
        cout<<ans<<endl;
    }
}
