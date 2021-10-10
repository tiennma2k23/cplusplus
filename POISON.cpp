#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;

const ll maxn=1e5+1;

II p[maxn],pi[maxn];
ll n,minDiff=LLONG_MAX;

ll dist(II x, II y)
{
    return (x.fi-y.fi)*(x.fi-y.fi)+(x.se-y.se)*(x.se-y.se);
}

bool cmpy(II a, II b)
{
    return a.se<b.se;
}

ll Get(ll l, ll r)
{
    if (l==r) return 0;
    if (l+1==r) return dist(p[l],p[r]);
    if (l+2==r)
    {
        return min(min(dist(p[l],p[r]),dist(p[l],p[r-1])),dist(p[l+1],p[r]));
    }
}

ll _find(ll l, ll r)
{
    if (r-l+1<=3) return Get(l,r);
    ll mid=(l+r)/2;
    ll df=_find(l,mid);
    ll ds=_find(mid+1,r);
    ll res=min(df,ds);
    double d=sqrt(res);
    ll dem=0;
    for (int i=l;i<=r;i++)
    {
        if (abs(p[i].fi-p[mid].fi)<d)
        {
            dem++;
            pi[dem]=p[i];
        }
    }
    sort(pi+1,pi+1+dem,cmpy);
    for (int i=1;i<=dem;i++)
        for (int j=i+1;j<=dem;j++)
    {
        if (abs(pi[j].se-pi[i].se)<d)
        {
            d=min(d,sqrt(dist(pi[i],pi[j])));
            res=min(res,dist(pi[i],pi[j]));
        }
        else break;
    }
    return res;
}

int main()
{
    freopen("POISON.inp","r",stdin);
    freopen("POISON.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        p[i]=II(a+i,i);
    }
    sort(p+1,p+1+n);
    cout<<_find(1,n)<<endl;
}
