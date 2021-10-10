#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
ll d[maxn],a[maxn];
vector<ll> v;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,k;
        cin>>n>>k;
        for (ll i=1;i<=n;i++)
        {
            cin>>a[i];
            d[a[i]]++;
            if (d[a[i]]==1) v.push_back(a[i]);
        }
        ll ans=LLONG_MAX;
        for (auto x:v)
        {
            ll i=1,cur=0;
            while (i<=n)
            {
                if (a[i]==x) i++;
                else
                {
                    i+=k;
                    cur++;
                }
            }
            ans=min(ans,cur);
            d[x]=0;
        }
        cout<<ans<<endl;
        v.clear();
    }
}
