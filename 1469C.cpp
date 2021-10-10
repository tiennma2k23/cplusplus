#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=2e5+1;
vector<II> v(maxn);
ll a[maxn];
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        bool ck=true;
        ll n,k;
        cin>>n>>k;
        for(ll i=1;i<=n;++i) cin>>a[i];
        v[1].fi=a[1];
        v[1].se=a[1]+k;

        for(ll i=2;i<=n;++i)
        {
            v[i].se=min(v[i-1].se+k-1,a[i]+k+k-1);
            v[i].fi=min(v[i].se-k,v[i-1].fi-k+1);
            v[i].fi=max(v[i].fi,a[i]);
        }
        for(ll i=2;i<=n;++i) if(v[i].fi>=v[i-1].se || v[i].se<=v[i-1].fi) ck=false;
        if(v[n].fi!=a[n]) ck=false;

        if(ck) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
