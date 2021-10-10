#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+5;
ll d[101][maxn],dem[101],a[maxn],t[maxn];
int main()
{
    ll n,q;
    cin>>n>>q;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (ll i=n;i>=1;i--)
    {
        dem[a[i]]++;
        d[a[i]][i]=dem[a[i]];
        for (ll j=100;j>=1;j--) if (j!=a[i]) d[j][i]=d[j][i+1];
        t[i]=t[i+1]+a[i];
    }
    //cout<<d[6][5]<<endl;
    while (q--)
    {
        ll x,i;
        cin>>x>>i;
        if (x>=t[i]) cout<<n-i+1<<endl;
        else
        {
            ll tmp=t[i]-x,j=100;
            ll ans=n-i+1;
            while (tmp>0&&j>=1)
            {
                if (d[j][i]>0)
                {
                    ll c=min(j*d[j][i],tmp);
                    ans-=(c/j+(c%j!=0));
                    tmp-=c;
                }
                if (tmp==0) break;
                if (j==1) break;
                j--;
                //cerr<<tmp<<" "<<ans<<" "<<j<<endl;
            }
            cout<<ans<<endl;
        }
    }
}
