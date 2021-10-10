#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+5,inf=LLONG_MAX;
int a[maxn],t;

void solve()
{
    int res = inf;
    int minn=inf;
    int ans = 0;
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+1+n);
    if (a[1]>0)
    {
        cout<<1<<endl;
        return;
    }
    for (int i=1; i<=n; i++)
    {
        if (a[i]<=0)
        {
            minn=min(a[i]-res,minn);
            res=a[i];
            ans++;
        }
        else
        {
            if (a[i]<=minn)
            {
                ans++;
                break;
            }
        }

    }cout<<ans<<endl;
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
