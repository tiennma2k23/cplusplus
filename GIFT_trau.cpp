#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll a[maxn],b[maxn],t[maxn];
map<ll,ll> d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    ll ans=0;
    for (ll i=1;i<=n-k+1;i++)
    {
        bool ck=true;
        for (ll j=0;j<k;j++)
        {
            b[j+1]=a[i+j];
            d[b[j+1]]++;
            if (d[b[j+1]]>1) {ck=false;break;}
        }

        if (ck) {
        sort(b+1,b+1+k);
        t[0]=0;
        for (ll i1=1;i1<=k;i1++) t[i1]=t[i1-1]+b[i1];
        ll vt=k/2+1;
        ans=max(ans,abs(t[vt]-vt*b[vt])+(t[k]-t[vt]-(k-vt)*b[vt]));
        /*if (k%2==0)
        {
            ll vt=k/2;
            ans=max(ans,abs(t[vt]-vt*b[vt])+(t[k]-t[vt]-(k-vt)*b[vt]));
        }*/
        }
        for (ll j=0;j<k;j++) d[a[i+j]]=0;
    }
    cout<<ans<<endl;
}
