#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+5;
ll a[maxn];
ll maxs[maxn],maxp[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
scanf("%lld",&q);
    while (q--){
    ll n;
    scanf("%lld",&n);
    for (ll i=1;i<=n;i++)
            scanf("%lld",&a[i]);
    maxp[0]=0;
    for (ll i=1;i<=n;i++) maxp[i]=max(maxp[i-1],a[i]);
    maxs[n+1]=0;
    for (ll i=n;i>=1;i--) maxs[i]=max(maxs[i+1],a[i]);
    bool ck=false;
    for (ll i=1;i<=n-2;i++)
    {
        if (ck) break;
        ll min1=LLONG_MAX;
        for (ll j=i+1;j<n;j++)
        {
            min1=min(min1,a[j]);
            if (maxp[i]==min1&&min1==maxs[j+1])
            {
                ll x=i;
                ll y=j-i;
                ll z=n-x-y;
                cout<<"YES"<<'\n';
                cout<<x<<" "<<y<<" "<<z<<'\n';
                ck=true;
                break;
            }

        }

    }
    if (!ck) cout<<"NO"<<endl;
    }
}
