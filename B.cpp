#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
int main()
{
    ll m,n,ans=0,tmp,k;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m;
    k=min(m,n);
    for (ll i=1; i<=k; i++)
    {
        ans+=n%i;
        ans%=mod;
    }
    m-=k;
    m%=mod;
    n%=mod;
    tmp=(m*n)%mod;
    ans=(ans+tmp)%mod;
    cout<<ans<<endl;
}
