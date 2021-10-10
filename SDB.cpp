
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,ans=1;
        cin>>n;
        for (ll i=2;i*i<=n;i++)
        {
            if (n%i==0)
            {
                ans*=i;
                while (n%i==0)
                {
                    n/=i;
                }
            }
        }
        ans*=n;
        cout<<ans<<endl;
    }
}
