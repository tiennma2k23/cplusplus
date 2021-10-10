#include<bits/stdc++.h>
#define TASK "LCSU"
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll a[maxn];
int main()
{
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
    ll n,i,j,ans=LLONG_MIN,m=0,t=0,k;
    cin>>n>>k;
    for (i=1;i<=k;i++)
    {
        ll x;
        cin>>x;
        if (x==0) t++;
        else m++,a[m]=x;
    }
    sort(a+1,a+1+m);
    a[0]=0;j=1;
    for (i=1;i<=m;i++)
    {
        while (a[i]-a[j]+j-i>t) j++;
        ans=max(t+i-j+1,ans);
    }
    cout<<ans<<endl;
}
