#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=1e6+1;
ll a[10],dem[maxn],d;
II p[maxn];
int main()
{
    ll n,i,dich,maxl=LLONG_MAX,maxc=LLONG_MAX,vtl=0,vtc=0,t=0;
    freopen("GAMES.inp","r",stdin);
    freopen("GAMES.out","w",stdout);
    for (i=1;i<=5;i++)
    {
        cin>>a[i];
        if (a[i]%2==1)
        {
            if (maxl>=a[i]) vtl=i;
            maxl=min(maxl,a[i]);
        }
        else
        {
            if (maxc>=a[i]) vtc=i;
            maxc=min(maxc,a[i]);
        }
        t+=a[i];
    }
    if (t%2==0) a[vtc]=0,dich=vtc;
    else a[vtl]=0,dich=vtl;
    ll vt1=1;
    i=2;
    while (i<=5)
    {
        if (a[i]>a[vt1])
        {
            d++;
            a[i]-=a[vt1];
            a[vt1]=0;
            dem[d]=a[vt1];
            a[vt1]=0;
            p[d]=II(vt1,i);
            vt1=i;i++;
        }
        else if (a[i]<a[vt1])
        {
            d++;
            a[vt1]-=a[i];
            dem[d]=a[i];
            a[i]=0;
            p[d]=II(vt1,i);
            i++;
        }
        else
        {
            d++;
            dem[d]=a[i];
            a[vt1]=0;
            a[i]=0;
            p[d]=II(vt1,i);
            vt1=i+1,i+=2;
        }
    }
    ll ans=0;
    for (i=1;i<=d;i++) ans+=dem[i];
    cout<<ans<<endl;
    for (i=1;i<=d;i++)
    {
        for (ll j=1;j<=dem[i];j++) cout<<p[i].fi<<" "<<p[i].se<<" "<<dich<<endl;
    }
}
