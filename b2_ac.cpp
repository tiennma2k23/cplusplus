
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+5;
ll a[maxn],b[maxn],c[maxn],ans[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("b2.inp","r",stdin);
    freopen("b2.ans","w",stdout);
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        ans[i]=ans[i-1]+a[i];
        if (i>=2) ans[i]=min(ans[i],ans[i-2]+b[i-1]);
        if (i>=3) ans[i]=min(ans[i],ans[i-3]+c[i-2]);
    }
    cout<<ans[n]<<endl;
}
