#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll t[maxn];
map<ll,ll> vt;
int main()
{
    ll n,k,i;
    ll ans=0;
    cin>>n>>k;
    ll pos=n;
    for (i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        t[i]=t[i-1]+a-k;
        if (a-k==0) ans=1,pos=min(pos,i);
    }
    for (i=1;i<=n;i++)
    {
        if (vt[t[i]]==0) vt[t[i]]=i;
        else
        {
            if (ans<i-vt[t[i]]) ans=i-vt[t[i]],pos=vt[t[i]]+1;
        }
    }
    if (ans==0) cout<<ans<<endl;
    else
    {
        cout<<ans<<" "<<pos<<endl;
    }
}
