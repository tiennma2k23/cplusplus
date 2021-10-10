#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[20],f[20][20000];
ll thu(ll i, bool gh, ll sum)
{
    if (i<0) return sum;
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
        x/=10;
        n++;
    }
    return thu(n-1,true,0);
}

int main()
{
    memset(f,-1,sizeof(f));
    while (true)
    {
        ll l,r;
        cin>>l>>r;
        if (l==-1&&r==-1) return 0;
        cout<<G(r)-G(l-1)<<endl;
    }
}
