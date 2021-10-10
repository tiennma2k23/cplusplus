#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=3e5+1,inf=-(1e9+1);
int a[maxn];
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n,k;
        cin>>n>>k;
        for (int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        //sort(a+1,a+1+n);
        int ans=inf;
        for (int i=1;i<=n;i++)
        {
            for (int j=i+1;j<=min(n,i+k);j++) ans=max(ans,i*j-k*(a[i]|a[j]));
        }
        cout<<ans<<endl;
    }
}
