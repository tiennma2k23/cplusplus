#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+5;
ll a[maxn];
ll d[maxn],vtd[maxn],vtc[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        cin>>n;
        a[0]=-1;
        for (ll i=1;i<=n;i++) vtd[i]=-1,vtc[i]=-1;
        for (ll i=1;i<=n;i++)
        {
            cin>>a[i];
            if (a[i]!=a[i-1])
            {
                d[a[i]]++;
                if (vtd[a[i]]==-1) vtd[a[i]]=i;
            }
            vtc[a[i]]=i;
        }
        ll ans=LLONG_MAX;
        for (ll i=1;i<=n;i++)
        {
            if (d[i]!=0)
            {
                ans=min(ans,d[i]-1+(vtd[i]!=1)+(vtc[i]!=n));
                d[i]=0;
            }
        }
        cout<<ans<<endl;
    }
}
