#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll d[10000], x[10000];
int main()
{
    ll n;
    ll a,b;
    cin>>n>>a>>b;
    for (ll i=1;i<=n;i++) cin>>x[i];
    sort(x+1,x+1+n);
    d[1]=a*2;
    for (ll i=2;i<=n;i++)
    {
        d[i]=d[i-1]+a*2;
        for (ll j=i-1;j>=1;j--)
        {
            d[i]=min(d[i],d[j-1]+b*(x[i]-x[j])+a*2);
        }
        //cerr<<d[i]<<endl;
    }
    if (d[n]%2==0) cout<<d[n]/2<<endl;
    else cout<<d[n]/2<<".5"<<endl;

}
