
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll p[maxn];
int main()
{
    ll m,n,k,l=0,r=0;
    cin>>n>>m>>k;
    ll tmp=0;
    while (m--)
    {
        ll s;
        cin>>s;
        if (s==1) tmp--;
        else tmp++;
        l=min(l,tmp);
        r=max(r,tmp);
    }
    l--,r++;
    ll ans=0;
    for (ll i=1;i<=k;i++) cin>>p[i];
    p[0]=0;
    p[k+1]=n+1;
    for (ll i=1;i<=k+1;i++)
    {
        ll vt1=p[i-1]-l;
        ll vt2=p[i]-r;
        if (vt1<=vt2) ans+=vt2-vt1+1;
    }
    cout<<ans<<endl;
}
