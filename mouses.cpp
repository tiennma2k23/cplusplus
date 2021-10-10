
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n,ans=0;
        cin>>n;
        int a[n+1],b[n+1];
        for (int i=1;i<=n;i++) cin>>a[i];
        for (int i=1;i<=n;i++) cin>>b[i];
        sort(a+1,a+1+n);
        sort(b+1,b+1+n);
        for (int i=1;i<=n;i++) ans=max(ans,abs(b[i]-a[i]));
        cout<<ans<<endl;
    }
}
