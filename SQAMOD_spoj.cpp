#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
const ll maxn=2e5+10;
ll f[maxn][5],a[maxn];
ll thu (ll i, ll gh, ll summ)
{
    if (i<0)
    {
        if (summ==0) return 1;
        else return 0;
    }
    if (!gh&&f[i][summ]>=0) return f[i][summ];
    ll kq=0,maxc;
    bool ghm;
    if (gh) maxc=a[i];
    else maxc=9;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh && (c==maxc);
        kq=(kq+thu(i-1,ghm,(summ+c*c)%3))%mod;
    }
    if (!gh) f[i][summ]=kq;
    return kq;
}
ll G(string x)
{
    ll t=0;
    ll n=x.length();
   for (ll i=0;i<n;i++)
   {
       a[n-1-i]=x[i]-'0';
       t+=((x[i]-'0')*(x[i]-'0'));
   }
   if (t%3==0) return thu(n-1,true,0)-1;
   return thu(n-1,true,0);
}
int main()
{
    memset(f,-1,sizeof(f));
        string n;
        cin>>n;
        cout<<G(n)<<endl;
}
