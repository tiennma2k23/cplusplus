#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v;
const ll lim=1e18;
int main()
{
    ll i=1;
    unsigned ll t=1;
    v.push_back(0);
    while (true)
    {
        t*=i;
        if (t>lim) break;
        v.push_back(t);
        i++;
    }
    cout<<v[v.size()-1]<<endl;
    ll n;
    cin>>n;
    while (n--)
    {
        ll x;
        cin>>x;
        cout<<binary_search(v.begin(),v.end(),x)<<endl;
    }
}
