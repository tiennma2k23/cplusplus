#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define ABC "burgers"
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(ABC ".inp","r",stdin);
    freopen(ABC ".out","w",stdout);
    ll q;
    cin>>q;
    while (q--)
    {
        ll b,p,f,h,c;
        cin>>b>>p>>f;
        cin>>h>>c;
        ll n=b/2;
        ll tmp=min(n,p);
        ll ans1=tmp*h+(min(n-tmp,f)*c);
        tmp=min(n,f);
        ll ans2=tmp*c+(min(n-tmp,p)*h);
        ll ans=max(ans1,ans2);
        cout<<ans<<endl;
    }
}
