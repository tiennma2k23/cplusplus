#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,t=0,ans;
        cin>>n;
        for (ll i=1;i<=n;i++)
        {
            t+=i;
            ans=i;
            if (t>=n) break;
        }
        ll m=ans;
        while (t>n)
        {
            if (t==n+1)
            {
                ans+=1;
                break;
            }
            ll c=t-n;
            c=(c-1);
            c=min(c,m);
            t=t-c-1;
        }
        cout<<ans<<endl;
    }
}
