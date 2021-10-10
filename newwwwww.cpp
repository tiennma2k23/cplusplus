#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
void solve()
{
    int n;
    cin>>n;
    int curr=1,ans=0;
    for (int i=2; i<44; i++)
    {
        int x=n/curr;
        curr=curr*i/__gcd(curr,i);
        int y=n/curr;
        ans+=(x-y)*i;
        ans%=mod;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
