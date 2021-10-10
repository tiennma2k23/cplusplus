#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+5;
bool Prime[N];
ll a[N],F[10][N];
void sang()
{
    memset(Prime,true,sizeof(Prime));
    Prime[0]=Prime[1]=false;
    for (ll i=2;i*i<=N;i++)
    {
        if (Prime[i])
        {
            for (ll j=i*i;j<=N;j+=i) Prime[j]=false;
        }
    }
}

ll thu(ll i, bool gh, ll sum)
{
    bool ghm;
    if (i<0)
    {
        if (Prime[sum]) return 1;
        else return 0;
    }
    if (!gh&&F[i][sum]>=0) return F[i][sum];
    ll kq=0;
    ll maxc;
    if (gh) maxc=a[i];
    else maxc=9;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh && (c==maxc);
        kq+=thu(i-1,ghm,sum+c);
    }
    if (!gh) F[i][sum]=kq;
    return kq;
}

ll G(ll x)
{
    a[0]=0;
    ll n=0;
    while (x>0)
    {
        a[n]=x%10;
        x/=10;
        n++;
    }
    return thu(n-1,true,0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset (F,-1,sizeof(F));
    sang();
    ll q;
    cin>>q;
    while (q--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<G(b)-G(a-1)<<endl;
    }
}
