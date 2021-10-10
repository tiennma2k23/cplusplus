
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=3e5+1;
ll a[maxn];
ll solve1(ll vt, ll n)
{
    ll temp=0;
    ll i=vt;
    ll gt=a[vt];
    a[vt]=a[vt-1];
     if (a[i-1]!=0&&a[i+1]!=0&&i<n)
            {
                if ((a[i-1]<a[i]&&a[i+1]<a[i])||(a[i-1]>a[i]&&a[i+1]>a[i])) temp++;
            }
    if (a[i-1]!=0&&a[i-2]!=0)
    {
        if ((a[i-1]<a[i-2]&&a[i-1]<a[i])||(a[i-1]>a[i-2]&&a[i-1]>a[i])) temp++;
    }
    if (a[i+1]!=0&&a[i+2]!=0&&i+2<=n)
    {
        if ((a[i+1]<a[i+2]&&a[i+1]<a[i])||(a[i+1]>a[i+2]&&a[i+1]>a[i])) temp++;
    }
    //cerr<<a[i]<<endl;
    a[vt]=gt;
   return temp;
}

ll solve2(ll vt,ll n)
{
    ll gt=a[vt];
    ll temp=0;
    ll i=vt;
    a[vt]=a[vt+1];
     if (a[i-1]!=0&&a[i+1]!=0&&i<n)
            {
                if ((a[i-1]<a[i]&&a[i+1]<a[i])||(a[i-1]>a[i]&&a[i+1]>a[i])) temp++;
            }
    if (a[i-1]!=0&&a[i-2]!=0)
    {
        if ((a[i-1]<a[i-2]&&a[i-1]<a[i])||(a[i-1]>a[i-2]&&a[i-1]>a[i])) temp++;
    }
    if (a[i+1]!=0&&a[i+2]!=0&&i+2<=n)
    {
        if ((a[i+1]<a[i+2]&&a[i+1]<a[i])||(a[i+1]>a[i+2]&&a[i+1]>a[i])) temp++;
    }
    a[vt]=gt;
   return temp;
}
ll sl[maxn];
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,ans=LLONG_MAX;
        cin>>n;
        for (ll i=1;i<=n;i++) cin>>a[i];
        ll tmp=0;
        ll tmp1=0;
        for (ll i=1;i<=n;i++)
        {
            if (a[i-1]!=0&&a[i+1]!=0&&i<n)
            {
                if ((a[i-1]<a[i]&&a[i+1]<a[i])||(a[i-1]>a[i]&&a[i+1]>a[i])) tmp++;
            }
            sl[i]=tmp-tmp1;
            tmp1=tmp;
            //cout<<tmp<<" "<<sl[i]<<" "<<i<<endl;
        }
        //cout<<tmp<<endl;
        for (ll j=1;j<=n;j++)
        {
            ans=min(ans,tmp-(sl[j]+sl[j+1]+sl[j-1]-min(solve1(j,n),solve2(j,n))));
            //cerr<<solve1(j)<<" "<<solve2(j)<<endl;
        }
        for (ll i=1;i<=n;i++) sl[i]=0;
        cout<<ans<<endl;
    }

}
