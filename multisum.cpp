#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn=1e4+1,mod=1e9+7;
ll a[maxn],f[maxn][200],k;

ll thu(ll i, bool gh, ll m)
{
    if (i<0)
    {
        if (m==0) return 1;
        return 0;
    }
    if (!gh&&f[i][m]>=0) return f[i][m];
    ll kq=0;
    ll maxc=gh?a[i]:9;
    bool ghm;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh&&(c==maxc);
        kq=(kq+thu(i-1,ghm,(m+c)%k))%mod;
    }
    kq%=mod;
    if (!gh) f[i][m]=kq;
    return kq;
}

ll G( string s)
{
    ll n=s.length();
    for (ll i=0;i<n;i++) a[n-i-1]=s[i]-'0';
    return thu(n-1,true,0);
}
int main()
{
    memset(f,-1,sizeof(f));
    string n;
    cin>>n;
    cin>>k;
    cout<<G(n)-1<<endl;
}
