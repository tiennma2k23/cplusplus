#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll d[10];
int main()
{
    ll n,ans=0;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        if (a==1) d[a]++;
        else if (a==2) d[a]+=d[1];
        else
        {
            d[a]+=d[2];
            ans=max(ans,d[a]);
        }
    }
    cout<<ans<<endl;
}
