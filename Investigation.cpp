#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e4+1;
ll a[maxn];
ll f[10][91][maxn];
ll thu(ll i,bool gh, ll sum, ll cs,ll k)
{
    bool ghm;
    if (i<0)
    {
        if (sum==0&&cs==0) return 1;
        return 0;
    }
    if (!gh&&f[i][sum][cs]>=0) return f[i][sum][cs];
    ll kq=0;
    ll maxc=gh?a[i]:9;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh&&(c==maxc);
        kq+=thu(i-1,ghm,((sum+c)%k),(cs*10+c)%k,k);
    }
    if (!gh) f[i][sum][cs]=kq;
    return kq;
}
ll G(ll x,ll k)
{
    a[0]=0;
    ll n=0;
    while (x)
    {
        a[n]=x%10;
        x/=10;
        n++;
    }
    return thu(n-1,true,0,0,k);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(f,-1,sizeof(f));
    ll a,b,k;
    cin>>a>>b>>k;
    cout<<G(b,k)-G(a-1,k)<<endl;
}
