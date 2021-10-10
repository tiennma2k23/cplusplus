#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1,inf=1e9+9;;
ll a[maxn];
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,ans=0;
        cin>>n;
        for(ll i=1;i<=n;i++) cin>>a[i];
        ll l=1;a[n+1]=inf;
        while (l<n)
        {
            ll r1=l,r2=r1;
            while (a[r1+1]<=a[r1]&&r1+1<=n) r1++;
            while (a[r2+1]>=a[r2]&&r2+1<=n) r2++;

            ll r=max(r1,r2);
            ll sl=r-l+1;
            ans+=sl*(sl-1)/2;
            l=r;
            if (r==n) l=r+1;
            else l=r;
        }
        cout<<ans+n<<endl;
    }
}
