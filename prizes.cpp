
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,inf=1e18;
int a[maxn],f[maxn],l[maxn],r[maxn];
int32_t main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
        if (i>=k)
        {
            cnt++;
            f[cnt]=a[i]-a[i-k];
        }
    }
    for (int i=1;i<=cnt;i++) l[i]=max(f[i],l[i-1]);
    for (int i=cnt;i>=1;i--) r[i]=max(r[i+1],f[i]);
    int ans=inf;
    for (int i=1;i<=cnt;i++)
    {
        if (i>k&&i+k<=cnt)
        {
            ans=min(ans,max(r[i+k],l[i-k]));
        }
        if (i<=k) ans=min(ans,r[i+k]);
        if (i+k>cnt) ans=min(ans,l[i-k]);
    }
    cout<<ans<<endl;
}
