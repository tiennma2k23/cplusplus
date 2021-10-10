#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m,r,c;
        cin>>n>>m>>r>>c;
        ll ans=max(n-r,r-1)+max(m-c,c-1);
        cout<<ans<<endl;
    }

}
