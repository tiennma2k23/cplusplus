#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define II pair<ll,ll>
using namespace std;
const ll maxn=2e5+1;
II film[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    for (ll i=1;i<=n;i++)
    {
        ll a,b;
        cin>>a>>b;
        film[i]=II(b,a);
    }
    sort(film+1,film+1+n);
    ll ans=0;
    multiset<ll> st;
    for (ll i=1;i<=n;i++)
    {
        bool ck=false;
        if (!st.empty())
        {
            auto it=st.upper_bound(film[i].se);
            if (it!=st.begin())
            {
                it--;
                if (*it<=film[i].se)
                {
                    ans++;ck=true;
                    st.erase(it);
                    st.insert(film[i].fi);
                }
            }
        }
        if (st.size()<k&&!ck)ans++,st.insert(film[i].fi);
    }
    cout<<ans<<endl;
}
