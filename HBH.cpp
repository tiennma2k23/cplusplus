#include<bits/stdc++.h>
#define ll long long
#define II pair<double,double>
#define fi first
#define se second
using namespace std;
map<II,ll> d;
II p[2001],m[4000001];
int main()
{
    ll n,i,j;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        double x,y;
        cin>>x>>y;
        p[i]=II(x,y);
    }
    sort(p+1,p+1+n);
    ll dem=0;
    for (i=1;i<=n;i++)
        for (j=i+1;j<=n;j++)
    {
        dem++;
        m[dem]=II((p[i].fi+p[j].fi)/2,(p[i].se+p[j].se)/2);
        d[m[dem]]++;
    }
    ll ans=0;
    for (i=1;i<=dem;i++)
    {
        ans+=(d[m[i]])*(d[m[i]]-1)/2;
        //cerr<<ans<<endl;
        d[m[i]]=0;
    }
    cout<<ans<<endl;
}
