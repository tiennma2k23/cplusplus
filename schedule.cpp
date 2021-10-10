#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    cin>>q;
    while (q--)
    {
        int n,x;
        cin>>n>>x;
        int ans=0;
        for (int i=2;i<=n;i++) ans=max(ans+10-x,0ll);
        cout<<ans<<endl;
    }
}
