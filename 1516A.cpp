
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll b[1000];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,k,pos;
        cin>>n>>k;
        for (ll i=1; i<=n; i++) cin>>b[i];
        ll t=0;
        for (ll i=1; i<n; i++)
        {
            t+=b[i];
            b[i]=0;
            if (t>=k)
            {
                pos=i;
                break;
            }
        }
        if (t>=k)
        {
            b[pos]+=t-k;
            b[n]+=k;
        }
        if (t<k) b[n]+=t;
        for (ll i=1; i<=n; i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}
