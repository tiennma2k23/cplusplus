#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    set<ll> s;
    cin>>q;
    while (q--)
    {
        s.clear();
        ll n;
        cin>>n;
        ll a[n+5];
        for (ll i=1;i<=n;i++) cin>>a[i];
        for (ll i=1;i<n;i++)
            for (ll j=i+1;j<=n;j++)
        {
            s.insert(a[j]-a[i]);
        }
        cout<<s.size()<<endl;
    }
}
