#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=2e5+1;
ll t[maxn];
II v[maxn];
bool cmp(II a,II b) { return a>b; }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("COOLMAC.inp","r",stdin);
    freopen("COOLMAC.out","w",stdout);
    ll n,m;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        cin>>v[i].se>>v[i].fi;
    }
    sort(v+1,v+1+n,cmp);
    cin>>m;
    for (ll i=1;i<=m;i++) cin>>t[i];
    sort(t+1,t+1+m);
    ll kt=1e5;
    deque<ll> dq;
    bool ck=true;
    for (ll i=1;i<=n;i++)
    {
        if (v[i].fi>=kt)
        {
            if (v[i].fi==v[i-1].fi)
            {
                dq.pop_back();
                dq.push_back(i);
            }
            else dq.push_back(i);
            kt=v[i].se;
        }
        else
        {
            ck=false;
            break;
        }
        //cerr<<ck<<endl;
        if (v[i].se<=t[1]) break;
    }
    if (ck) cout<<dq.size()<<endl;
    else cout<<-1<<endl;
}
