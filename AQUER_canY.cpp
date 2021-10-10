
#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define se second
#define fi first
using namespace std;
const ll X=30000,inf=9*1e9;
ll a[100001];
II v[100001];
ll n,q;
ll timkiem(ll l,ll r,ll key)
{
    ll ans=r;
    while (l<=r)
    {
        ll mid=(l+r)/2;
        if (a[mid]==key) ans=mid;
        if (a[mid]<=key) r=mid-1;
        else l=mid+1;
    }
    return ans;
}

void sub1()
{
    for (ll j=1;j<=q;j++)
    {
        ll r,p;
        a[0]=inf;
        r=v[j].fi;
        p=v[j].se;
        while (p>0)
        {
            ll vt=1;
            bool ck=true;
            /*for (ll i=r;i>1;i--)
            {
                if (a[i]!=a[i-1])
                {
                    vt=i-1;
                    ck=false;
                    break;
                }
            }*/
            vt=timkiem(1,r,a[r])-1;
            //cerr<<vt<<endl;
            /*
            if (ck)
            {
                ll t=p/r;
                for (ll i=1;i<=r;i++)
                {
                    if (i<=p%r) a[i]+=t+1;
                    else a[i]+=t;
                }
                p=0;
            }*/

                ll tmp=(a[vt]-a[r])*(r-vt);
                ll tm=min(tmp,p);
                    ll t=tm/(r-vt);
                    for (ll i=vt+1; i<=r; i++)
                    {
                        if (i-vt<=tm%(r-vt)) a[i]+=t+1;
                        else a[i]+=t;
                    }
                    p-=tm;
            }
        }
    for (ll i=1;i<=n;i++) cout<<a[i]<<" ";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    bool kt=true;
    cin>>n>>q;
        for (ll i=1;i<=q;i++) {
                cin>>v[i].fi>>v[i].se;
                if (v[i].se!=1) kt=false;
        }
        if (kt)
   {
        for (ll i=1;i<=q;i++)
        {
            ll r,p;
            r=v[i].fi;
            p=v[i].se;
            ll pos=timkiem(1,r,a[r]);
            //cerr<<pos<<endl;
            a[pos]+=p;
        }
        for (ll i=1;i<=n;i++) cout<<a[i]<<" ";
   }
   else sub1();
}
