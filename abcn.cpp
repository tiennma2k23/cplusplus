#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll lim=2e6+1;
ll d[100000005]; vector<ll> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    v.push_back(0);
    for (ll i=1;i<=9;i++)
    {
        ll so=0;
        for (ll j=1;j<=8;j++) {
                so=so*10+i;
                v.push_back(so);
        }
    }
    ll n,ans=0;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        for (auto val:v)
        {
            if (val-x>=0) ans+=d[val-x];
        }
        d[x]++;
    }
    cout<<ans<<endl;
}

