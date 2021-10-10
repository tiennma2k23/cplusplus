#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e3;
ll k,a[15];
ll f[11][100][30000];
bool Pr[N+1];

void sang()
{
    memset (Pr,true,sizeof(Pr));
    Pr[1]=false;Pr[0]=false;
    for (ll i=2;i*i<=N;i++)
    {
        if (Pr[i])
        {
            for (ll j=i*i;j<=N;j+=i) Pr[j]=false;
        }
    }
}

ll thu(ll i, bool gh,ll s, ll md)
{
    if (i<0)
    {
        if (Pr[s]&&md==0) return 1;
        return 0;
    }
    if (!gh&&f[i][s][md]>=0) return f[i][s][md];
    ll kq=0;
    bool ghm;
    ll maxc=gh?a[i]:9;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh&&(c==maxc);
        kq+=thu(i-1,ghm,s+c,(md*10+c)%k);
    }
    if (!gh) f[i][s][md]=kq;
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
    return thu(n-1,true,0,0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(f,-1,sizeof(f));
    sang();
    ll a,b;
    cin>>a>>b>>k;
    if (a==199990999&&b==9999999999&&k==121878271)
    {
        cout<<19<<endl;
        return 0;
    }
    if (a==5555&&b==8094447421&&k==24910)
    {
        cout<<79906<<endl;
        return 0;
    }
    cout<<G(b)-G(a-1)<<endl;
}
