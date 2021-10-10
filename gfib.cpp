#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define se second
#define fi first
using namespace std;
vector<II> v;
bool cmp(II a,II b)
{
    if (a.fi!=b.fi) return a.fi<b.fi;
    else return a.se>b.se;
}
ll a[1010];
int main()
{
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i],v.push_back(II(a[i],1));
    ll ans=2;
    sort(v.begin(),v.end());
    for (ll i=3;i<=n;i++)
    {
        ll tmp=1;
        for (ll j=i-1;j>1;j--)
        {
            ll key=a[i]-a[j];
            ll pos=upper_bound(v.begin(),v.begin()+j,II(key,1000))-v.begin()-1;
            //cerr<<pos<<" "<<key<<" "<<v[pos].fi<<endl;
            if (pos>=0 && v[pos].fi==key)
            {
                //v.push_back(II(a[i],v[pos].se+2));
                ans=max(ans,v[pos].se+2);
                tmp=max(tmp,v[pos].se+2);
                //sort(v.begin(),v.end());
                cerr<<i<<" "<<v[pos].fi<<" "<<v[pos].se<<endl;
            }
        }
        v.push_back(II(a[i],tmp));
        sort(v.begin(),v.end());
        cerr<<tmp<<endl;
    }
    cout<<ans<<endl;
}
