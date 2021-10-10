#include<bits/stdc++.h>
#define ll long long
using namespace std;
multiset<ll> s;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        s.clear();
        ll n,w;
        cin>>n>>w;
        for (ll i=1; i<=n; i++)
        {
            ll x;
            cin>>x;
            s.insert(x);
        }
        ll ans=0;
        while (!s.empty())
        {
            ll t=w;
            ans++;
            while (t>0)
            {
                auto it=upper_bound(s.begin(),s.end(),t);
                if (it!=s.begin())
                {
                    it--;
                    s.erase(it);
                    t-=*it;
                }
                else break;
            }
        }
        cout<<ans<<endl;
    }
}
