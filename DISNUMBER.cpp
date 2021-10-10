#include<bits/stdc++.h>
#define ll long long
#define TASK "DISNUMBER"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

ll a[20],f[20][2000][3];

ll thu(ll i, bool gh, ll tt, bool nghia)
{
    if (i<0) return 1;
    if (!gh&&f[i][tt][nghia]>=0) return f[i][tt][nghia];
    ll kq=0;
    bool ghm;
    if (gh)
    {
        if(nghia)
        {
            ghm=(a[i]==0);
            if ((tt&1)==0) kq+=thu(i-1,ghm,tt|1,true);
        }
        else
        {
            ghm=(a[i]==0);
            kq+=thu(i-1,ghm,tt,false);
        }
        for (ll c=1;c<=a[i];c++)
        {
            ghm=(a[i]==c);
            if ((tt&(1<<c))==0) kq+=thu(i-1,ghm,tt|(1<<c),true);
        }

    }
    else
    {
        if (nghia)
        {
            if ((tt&1)==0) kq+=thu(i-1,false,tt|1,true);
        }
        else kq+=thu(i-1,false,tt,false);
        for (ll c=1;c<=9;c++)
        {
            if ((tt & (1 << c))==0) kq+=thu(i-1,false,tt|(1<<c),true);
        }
    }
    if (!gh) f[i][tt][nghia]=kq;
    return kq;
}
ll G(ll x)
{
    a[0]=0;
    ll n=0;
    while (x)
    {
        a[n]=x%10;
        x/=10;
        n++;
    }
    return thu(n-1,true,0,false);
}
int main()
{
    FastIO;
    //freopen(TASK".inp","r",stdin);
    //freopen(TASK".out","w",stdout);
    memset(f,-1,sizeof(f));
    ll q;
    cin>>q;
    while (q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<G(r)-G(l-1)<<endl;
    }
}
