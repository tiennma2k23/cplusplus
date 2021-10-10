
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1,inf=2e9;
int a[maxn],b[maxn];
vector<int> v;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;
    cin>>n>>k;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++) cin>>b[i];
    sort(b+1,b+1+n);
    int l=-inf,r=inf,ans=0;
    while (l<=r)
    {
        int mid=(l+r)/2;
        int res=0;
        for (int i=1;i<=n;i++)
        {
            int key=mid-a[i];
            res+=(upper_bound(b+1,b+1+n,key)-b)-1;
        }
        if (res<k) l=mid+1;
        else if (res>k) ans=mid,r=mid-1;
        else
        {
            ans=mid;
            break;
        }
    }
    //cout<<ans<<endl;
    ans--;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (a[i]+b[j]<=ans) v.push_back(a[i]+b[j]);
            else break;
        }
    }
    ans++;
    while (v.size()<k) v.push_back(ans);
    sort(v.begin(),v.end());
    for (int i=0;i<k;i++) cout<<v[i]<<" ";
}
