#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=1e18;
int32_t main()
{
    int q;cin>>q;
    while (q--)
    {
        int ans=inf,n;
        cin>>n;
        int a[n+5];
        for (int i=1;i<=n;i++) cin>>a[i];
        ans=a[1];
        for (int i=2;i<=n;i++)
        {
            ans&=a[i];
        }
        cout<<ans<<endl;
    }
}
