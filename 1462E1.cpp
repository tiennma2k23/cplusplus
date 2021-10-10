#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
ll a[maxn];
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,ans=0;
        cin>>n;
        for (ll i=1; i<=n; i++) cin>>a[i];
        sort(a+1,a+1+n);
        for (ll i=1; i<=n; i++)
        {
            ll key=a[i]+2;
            ll pos=upper_bound(a+i+1,a+1+n,key)-a;
            //cerr<<pos<<endl;
            pos--;

            if (pos>i&&a[pos]-a[i]<=2) ans+=(pos-i)*(pos-i-1)/2;
        }
        cout<<ans<<endl;
    }
}
