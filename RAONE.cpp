#include<bits/stdc++.h>
#define TASK "RAONE"
#define ll long long
using namespace std;
const ll maxn=1e5,X=1e5;
ll a[maxn],f[100][2*X];
ll thu(ll i, bool gh, ll h)
{
    if (i<0)
    {
        if (h==1) return 1;
        return 0;
    }
    if (!gh&&f[i][h+X]>=0) return f[i][h+X];
    ll kq=0,maxc=gh?a[i]:9;
    bool ghm;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh && (c==maxc);
        ll h1;
        if (i%2==0) h1=h-c;
        else h1=h+c;
        kq+=thu(i-1,ghm,h1);
    }
    if (!gh) f[i][h+X]=kq;
    return kq;
}
ll G(ll x)
{
   ll  n=0;
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
    ll q;
    cin>>q;
    while (q--){
        ll l,r;
        cin>>l>>r;
        cout<<G(r)-G(l-1)<<endl;;
    }
}
