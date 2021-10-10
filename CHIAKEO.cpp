#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn=2e5;

ll p[maxn],n,c,t;

bool kt(ll x)
{
    ll tmp=0,sl=0;
    for (ll i=1;i<=n;i++)
    {
        tmp+=p[i];
        if (p[i]/t+(p[i]%t!=0)>x) return false;
        if ((tmp/t+(tmp%t!=0))>x) sl++,tmp=p[i];
        else if ((tmp/t+(tmp%t!=0))==x) sl++,tmp=0;
    }
    //cerr<<sl<<endl;
    if (tmp>0) sl++;
    if ((tmp/t+(tmp%t!=0))>x) return false;
    if (sl>c) return false;
    return true;
}

int main()
{
    cin>>n>>c>>t;
    for (ll i=1;i<=n;i++) cin>>p[i];
    ll l,r,ans=1;
    l=1;r=10000000;
    while (l<=r)
    {
        ll mid=(l+r)/2;//cerr<<mid<<" ";
        if (kt(mid)) r=mid-1,ans=mid;
        else l=mid+1;
    }
    cout<<ans<<endl;
}
