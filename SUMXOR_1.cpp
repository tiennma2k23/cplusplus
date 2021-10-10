#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
ll a[maxn],s[maxn],n;
void create()
{
    for (ll i=1;i<=n;i++) s[i]=(s[i-1]^a[i]);
}

ll solve(ll l, ll r)
{
    return s[l-1]^s[r];
}

int main()
{
    freopen("sumxor.inp","r",stdin);
    freopen("sumxor.ans","w",stdout);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    create();
    ll m;
    cin>>m;
    while (m--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<solve(l,r)<<endl;
    }cout<<1<<endl;
}
