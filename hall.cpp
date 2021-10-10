#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
    ll ans=0;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    a--,c--;
    c/=2;d/=2;
    ll tmp=min((ll)(d/2),(ll)(sqrt(b)));
    for (ll i=1;i<=tmp;i++)
    {
       ll l=max({i,c-i+1,(ll)(a/i)+1});
       ll r=min(d-i,(ll)(b/i));
       if (l<=r) ans+=r-l+1;
    }
    cout<<ans;
}
