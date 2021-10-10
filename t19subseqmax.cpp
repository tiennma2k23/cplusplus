#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=1e16;
int a[1000001];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,sum=0,ans=-inf;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (int i=1;i<=n;i++)
    {
        sum=max(sum+a[i],a[i]);
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
}
