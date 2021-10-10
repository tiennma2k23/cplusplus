#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+5;
ll x[maxn],y[maxn],tx1,ty1,tx2,ty2;
int main()
{
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    sort (x+1,x+1+n);
    sort(y+1,y+1+n);
    for (ll i=1;i<=n;i++)
    {
        tx1+=abs(x[n/2]-x[i]);
        tx2+=abs(x[n/2+1]-x[i]);
        ty1+=abs(y[n/2]-y[i]);
        ty2+=abs(y[n/2+1]-y[i]);
    }
    ll ans=min(tx1,tx2)+min(ty1,ty2);
    cout<<ans<<endl;
}
