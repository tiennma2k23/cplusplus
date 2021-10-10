#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1;
int a[maxn],b[maxn],ta[maxn],tb[maxn];
bool cmp(int a, int b)
{
    return a>b;
}

void solve()
{
    int n,tm=0,tl=0,ans;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+1+n,cmp);
    sort(b+1,b+1+n,cmp);
    for (int i=1;i<=n;i++) ta[i]=ta[i-1]+a[i];
    for (int i=1;i<=n;i++) tb[i]=tb[i-1]+b[i];
    //for (int i=1;i<=n;i++) cout<<tb[i]<<" ";
    int l=0,r=n;
    while (l<=r)
    {
        int mid=(l+r)/2;
        int tmp=n+mid;
        int sl=tmp-1ll*(tmp/4);
        //cerr<<sl<<endl;
        if (sl>mid)
        {
            tm=mid*100+ta[sl-mid];
            //tl=tb[sl-mid];
        }
        else
        {
            tm=mid*100;
            //tl=0;
        }
        if (sl<=n) tl=tb[sl];
        else tl=tb[n];
        //cerr<<mid<<" "<<tm<<" "<<tl<<endl;
        if (tm>=tl) r=mid-1,ans=mid;
        else l=mid+1;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--) solve();
}
