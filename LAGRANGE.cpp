#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dem(ll x)
{
    ll dem1=0;
    while (x>0)
    {
        dem1++;
        ll tmp=sqrt(x);
        x-=tmp*tmp;
    }
    return dem1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll l[100],r[100];
    for (ll i=1;i<=10;i++)
    {
        l[i]=1e9+1;
        r[i]=-1;
    }
    ll n,ans=-1;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        l[dem(i)]=min(l[dem(i)],i);
        r[dem(i)]=max(r[dem(i)],i);
    }
    for (ll i=1;i<=10;i++) cout<<l[i]<<" "<<r[i]<<endl;
}
