#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,sum=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a+1,a+1+n);
    int m;
    cin>>m;
    while (m--)
    {
        int x,y;
        cin>>x>>y;
        int pos=lower_bound(a+1,a+1+n,x)-a;
        if (pos==n+1)
        {
            cout<<x-a[n]+max(y-(sum-a[n]),0ll)<<'\n';
        }
        else{
            int ans=max(y-(sum-a[pos]),0ll);
            if (pos>1) ans=min(ans,max(y-(sum-a[pos-1]),0ll)+x-a[pos-1]);
            cout<<ans<<'\n';
        }
    }
}
