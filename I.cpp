#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+5;
ll a[maxn],ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    for (ll i=1; i<=n; i++) cin>>a[i];
    for (ll i=1; i<=n; i++)
    {
        if (a[i]<a[i-1])
        {
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<ans<<endl;
}
