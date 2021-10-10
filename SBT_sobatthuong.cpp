#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=25,MOD=1e9+7;
ll a[25],f[maxn][2000000];
bool ck[20];
string s;
ll m_c;
ll k;
ll thu(ll i,bool gh, ll mod)
{
    if (i<0)
    {
        if (mod==0) return 1;
        return 0;
    }
    if (!gh&&f[i][mod]>=0) return f[i][mod]%MOD;
    ll kq=0;
    bool ghm;
    ll maxc=gh?a[i]:9;
    for (int c=0;c<=maxc;c++) if (ck[c])
    {
        ghm=gh&&(c==maxc);
        //mod=(mod*10+c)%x;
        kq+=thu(i-1,ghm,(mod*10+c)%k);
        kq%=MOD;
    }
    if (!gh) f[i][mod]=kq%MOD;
    return kq%MOD;
}

ll G(ll x)
{
    ll n=0;
    a[0]=0;
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
    memset(f,-1,sizeof(f));
    ll l,r;
    cin>>k>>l>>r;
    cin>>s;
    for (int i=0;i<s.length();i++) m_c=max(m_c,1ll*(s[i]-'0')),ck[1ll*(s[i]-'0')]=true;
    int ans=G(r);
    memset(f,-1,sizeof(f));
    ans=(ans-G(l-1)+MOD)%MOD;
    cout<<ans<<endl;
    cout<<(G(r)-G(l-1)+MOD)%MOD<<endl;
}
