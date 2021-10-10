#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=1e6+1,N=1e6;
ll a[10],dem[maxn],d,b[10];
II p[maxn];
ll n,i,dich,t=0,res;
void solve (ll pos)
{
    dich=pos;
    a[pos]=0;
    ll vt1=1;
    d=0;
    i=2;
    while (i<=5)
    {
        if (i==pos) i++;
        if (vt1==pos) vt1++;
        if (vt1==i) i++;
        if (a[i]>a[vt1])
        {
            d++;
            a[i]-=a[vt1];
            a[vt1]=0;
            dem[d]=a[vt1];
            a[vt1]=0;
            p[d]=II(vt1,i);
            vt1=i;
            i++;
        }
        else if (a[i]<a[vt1])
        {
            d++;
            a[vt1]-=a[i];
            dem[d]=a[i];
            a[i]=0;
            p[d]=II(vt1,i);
            i++;
        }
        else
        {
            d++;
            dem[d]=a[i];
            a[vt1]=0;
            a[i]=0;
            p[d]=II(vt1,i);
            vt1=i+1,i+=2;
        }
    }
}

bool check()
{
    ll i;
    res=0;
    for (i=1; i<=5; i++) if (a[i]>0) return false;
    for (i=1; i<=d; i++) res+=dem[i];
    if (res>N) return false;
    return true;
}

void Out()
{
    cout<<res<<endl;
    for (ll i=1; i<=d; i++)
    {
        for (ll j=1; j<=dem[i]; j++) cout<<p[i].fi<<" "<<p[i].se<<" "<<dich<<endl;
        dem[i]=0;
    }
}

void Reset()
{
    for (i=1; i<=5; i++) a[i]=b[i];
}
int main()
{
    freopen("GAMES.INP","r",stdin);
    freopen("GAMES.OUT","w",stdout);
    for (i=1; i<=5; i++)
    {
        cin>>a[i];
        b[i]=a[i];
        t+=a[i];
    }
    for (ll m=1; m<=5; m++)
    {
        Reset();
        if ((t-a[m])%2==0)
        {
            solve(m);
            if (check())
            {
                Out();
                return 0;
            }
        }
    }
}
