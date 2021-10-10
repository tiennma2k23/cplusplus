#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=1e5+1;
II p[maxn],d1,d2;
ll n,d,k,maxx=LLONG_MIN,minx=LLONG_MAX;
bool cmp(II a,II b)
{
    return a.se<b.se;
}
bool good(ll x)
{
    ll dem=0;
    //min
    for (ll i=2;i<n;i++)
    {
        if (p[i].fi<p[1].fi)
        {
            if (abs(p[i].se-p[1].se)<=x) dem++;
        }
        else
        {
            if ((p[i].fi-p[1].fi<=x-(p[1].fi-minx))&&(abs(p[i].se-p[1].se)<=x)) dem++;
        }
    }
    // max
    for (ll i=2;i<n;i++)
    {
        if (p[i].fi>p[n].fi)
        {
            if (abs(p[i].se-p[n].se)<=x) dem++;
        }
        else
        {
            if ((p[n].fi-p[i].fi<=x-(maxx-p[n].fi))&&(abs(p[n].se-p[i].se)<=x)) dem++;
        }
    }
    dem+=2;
    return dem>=n;
}

bool good2(ll x)
{
    ll dem=0;
    //min
    for (ll i=2;i<n;i++)
    {
        if (p[i].fi<p[1].fi)
        {
            if (abs(p[i].se-p[1].se)<=x) dem++;
        }
        else
        {
            if ((p[i].fi-p[1].fi<=x-(p[1].fi-minx))&&(abs(p[i].se-p[1].se)<=x)) dem++;
        }
    }
    // max
    for (ll i=2;i<n;i++)
    {
        if (p[i].fi>p[n].fi)
        {
            if (abs(p[i].se-p[n].se)<=x) dem++;
        }
        else
        {
            if ((p[n].fi-p[i].fi<=x-(maxx-p[n].fi))&&(abs(p[n].se-p[i].se)<=x)) dem++;
        }
    }
    dem+=2;
    return dem>n;
}

/*void find_d()
{
        ll l,r,mid,d=0;
        l=1;r=1;
        while (!good(r))
        {
            l=r;
            r*=2;
        }
        while (l<=r)
        {
            ll mid=(l+r)/2;
            if (good(mid))
            {
                d=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
}

void find_k()
{
        ll l,r,mid,k=0;
        l=1;r=1;
        while (!good2(r))
        {
            l=r;
            r*=2;
        }
        while (l<=r)
        {
            ll mid=(l+r)/2;
            if (good2(mid))
            {
                k=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
}*/

int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        cin>>n;
        for (ll i=1;i<=n;i++)
        {
            ll x,y;
            cin>>x>>y;
            maxx=max(maxx,x);
            minx=min(minx,x);
            p[i]=II(x,y);
        }
        ll l,r,mid,k=0;
        sort(p+1,p+1+n,cmp);
        //findd
        l=1;r=1;
        while (!good(r))
        {
            l=r;
            r*=2;
        }
        while (l<=r)
        {
            ll mid=(l+r)/2;
            if (good(mid))
            {
                d=mid;
                r=mid-1;
            }
            else l=mid+1;
        }

        //findk
        l=1;r=1;
        while (!good2(r))
        {
            l=r;
            r*=2;
        }
        while (l<=r)
        {
            ll mid=(l+r)/2;
            if (good2(mid))
            {
                k=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<d<<" "<<k<<endl;
    }
}
