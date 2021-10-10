#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e4+1;
ll a[maxn];
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,ans=0,t=0;
        cin>>n;
        for (ll i=1;i<=n;i++) cin>>a[i],t+=a[i];
        for (ll i=n;i>=1;i--)
        {
            if (t%i==0)
            {
                ans=0;
                ll sum=t/i;
                ll tmp=0;
                bool ck=true;
                for (ll j=1;j<=n;j++)
                {
                    tmp+=a[j];
                    ans++;
                    if (tmp>sum)
                    {
                        ck=false;
                        break;
                    }
                    else if (tmp==sum) tmp=0,ans--;
                }
                if (ck)
                {
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}
