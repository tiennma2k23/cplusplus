#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define ABC "distinctDigits"
using namespace std;
bool ck(ll x)
{
    vector<ll> d(20,0);
    while (x>0)
    {
        d[x%10]++;
        if (d[x%10]==2) return false;
        x/=10;
    }
    return true;
}
int main()
{
        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(ABC ".inp","r",stdin);
    freopen(ABC ".out","w",stdout);
    vector<ll> v(100001);
    for (ll i=1;i<=100001;i++)
    {
        ll tmp=i;
        if (ck(i)) v.push_back(i);
    }
    ll l,r;
    while (cin>>l>>r)
    {
        ll tmp=v[lower_bound(v.begin(),v.end(),l)-v.begin()];
        if (tmp<=r&&tmp>0) cout<<tmp<<endl;
        else cout<<-1<<endl;
    }
}
