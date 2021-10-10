#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=5e5+1;
ll a[maxn];
map<ll,ll> d;
int main()
{
    ll pr=0,ans=0,n;
    cin>>n;
    ll l=1,r=1;
    for (ll i=1;i<=n;i++) cin>>a[i];
    while (r<=n)
    {
        if (d[a[r]]<2) d[a[r]]++,r++;
        else
        {
            r--;
            if (l>pr) ans+=(r-l+2)*(r-l+1)/2;
            else ans+=((r-l+2)*(r-l+1)-(pr-l+2)*(pr-l+1))/2;//cerr<<r<<pr<<l<<" "<<ans<<endl;
            pr=r;
            r++;
            while (d[a[r]]>=2) d[a[l]]--,l++;

        }//cerr<<r<<endl;
    }
    //cerr<<r<<pr<<l<<" "<<ans<<endl;
    r--;
    if (l>pr) ans+=(r-l+2)*(r-l+1)/2;
            else ans+=((r-l+2)*(r-l+1)-(pr-l+2)*(pr-l+1))/2;
    cout<<ans<<endl;
}
