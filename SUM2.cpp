#include<bits/stdc++.h>
#define ll long long
#define TASK "ABC"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
ll s;
ll a[20],f[20][200];
ll thu(ll i, bool gh, ll sum)
{
    if (i<0)
    {
        if (sum==s) return 1;
        return 0;
    }
    if (!gh&&f[i][sum]>=0) return f[i][sum];
    ll kq=0;
    bool ghm;
    ll maxc=gh?a[i]:9;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh&&(c==maxc);
        kq+=thu(i-1,ghm,sum+c);
    }
    if (!gh) f[i][sum]=kq;
    return kq;
}

ll G(ll x)
{
    ll n=0;
    while (x)
    {
        a[n]=x%10;
        n++;
        x/=10;
    }
    return thu(n-1,true,0);
}
int main()
{
    FastIO
    /*freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);*/
    memset(f,-1,sizeof(f));
    ll l,r,ans=-1;
    cin>>l>>r>>s;
    cout<<G(r)-G(l-1)<<endl;
    ll mid=(l+r)/2;
    while (l<=r)
    {
        mid=(l+r)/2;
        if (G(mid)-G(l-1)>0)
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}
