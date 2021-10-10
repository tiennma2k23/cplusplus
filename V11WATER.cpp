#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5e5+1;
int a[maxn],l[maxn],r[maxn];
int32_t main()
{
    int n,ans=0;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    l[1]=a[1],r[n]=a[n];
    for (int i=2;i<=n;i++) l[i]=max(l[i-1],a[i]);
    for (int i=n-1;i>=1;i--) r[i]=max(r[i+1],a[i]);
    for (int i=1;i<=n;i++)
    {
        ans+=max(0ll,min(l[i],r[i])-a[i]);
    }
    cout<<ans<<endl;
}
