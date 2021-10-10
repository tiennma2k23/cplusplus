#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=100;
int a[maxn],b[maxn];
void solve()
{
    int n,ans1,ans2;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    bool ck=true;
    for (int i=1;i<=n;i++)
    {
        if (a[i]<=a[i-1])
        {
            ck=false;
            break;
        }
    }
    if (ck)
    {
        cout<<0<<endl;
        return;
    }
    if (a[1]==n&&a[n]==1)
    {
        cout<<3<<endl;
        return;
    }
    sort(a+1+1,a+1+n);
    ck=true;
    for (int i=1;i<=n;i++)
    {
        if (a[i]<=a[i-1])
        {
            ck=false;
            break;
        }
    }
    if (ck) ans1=1;
    else ans1=2;

    sort(b+1,b+n);
    ck=true;
    for (int i=1;i<=n;i++)
    {
        if (b[i]<=b[i-1])
        {
            ck=false;
            break;
        }
    }
    if (ck) ans2=1;
    else ans2=2;
    int ans=min(ans1,ans2);
    cout<<ans<<endl;
}
int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
