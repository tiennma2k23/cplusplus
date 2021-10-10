#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e7+1;
int a[maxn];
int32_t main()
{
    int n,X;
    cin>>n>>X;
    for (int i=1;i<=n;i++) cin>>a[i];
    int l=1,r=n,ans=0;
    while (l<=n)
    {
        while (r>l&&a[r]+a[l]>X) r--;
        ans+=max(r-l,0ll);
        l++;
    }
    cout<<ans<<endl;
}
