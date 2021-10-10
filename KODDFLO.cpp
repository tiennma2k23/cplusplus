#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5;
ll vt[maxn];
int main()
{
    ll n,a,dem=0,ans=0,k;
    cin>>n>>k;
    for (ll i=1;i<=n;i++)
    {
        cin>>a;
        if (a%2==1)
        {
            dem++;
            vt[dem]=i;
        }
    }
    vt[0]=0;vt[dem+1]=n+1;
    //cout<<dem<<endl;
    for (ll i=1;i<=dem-k+1;i++)
    {
        ll ddt=max(vt[i]-vt[i-1]-1,0ll);
        ll dds=max(vt[i+k]-1-vt[i+k-1],0ll);
        ans+=1+ddt+dds+ddt*dds;
        //cerr<<ddt<<" "<<dds<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
}
