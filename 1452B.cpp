#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,sum=0,maxx=0;
        cin>>n;
        ll n1=n;
        while (n1--)
        {
            ll a;
            cin>>a;
            sum+=a;
            maxx=max(maxx,a);
        }
        ll tmp=(n-1)*maxx;
        ll ans;
        if (sum<tmp) ans=tmp-sum;
        else ans=sum%(n-1);
        cout<<ans<<endl;
    }
}
