
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=20;
ll a[20],f[200][2000][3];
ll thu(ll i, bool gh, ll cs0, bool nghia,ll k)
{
    if (i<0)
    {
        if (cs0==k) return 1;
        return 0;
    }
    if (!gh&&f[i][cs0][nghia]>=0) return f[i][cs0][nghia];
    ll kq=0,maxc=gh?a[i]:9;
    bool ghm;
    if (nghia)
    {
        for (ll c=0;c<=maxc;c++)
        {
                ghm=gh&&(c==maxc);
                kq+=thu(i-1,ghm,cs0+(c==0),(c!=0)|nghia,k);
        }
    }
    else
    {
        ghm=gh&&(maxc==0);
        kq+=thu(i-1,ghm,cs0,false,k);
        for (ll c=1;c<=maxc;c++)
        {
            ghm=gh&&(c==maxc);
            kq+=thu(i-1,ghm,cs0,true,k);
        }
    }
    if (!gh) f[i][cs0][nghia]=kq;
    return kq;
}

ll G(ll x, ll k)
{
    ll n=0;
    while (x)
    {
        a[n]=x%10;
        n++;
        x/=10;
    }
    return thu(n-1,true,0,false,k);
}

int main()
{
    memset(f,-1,sizeof(f));
    while (true){
        ll r,k;
        cin>>r>>k;
        if (r==0&&k==0) return 0;
        cout<<G(r,k)<<endl;
    }
}
