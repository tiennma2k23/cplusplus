#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200001];
void solve()
{
    int n,ans=0,l,r;
    cin>>n>>l>>r;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for (int i=1;i<=n;i++)
    {
        int tmp=l-a[i];
        int pos1=lower_bound(a+1+i,a+1+n,tmp)-a;
        tmp=r-a[i];
        int pos2=upper_bound(a+1+i,a+1+n,tmp)-a;
        ans+=pos2-pos1;
    }
    cout<<ans<<endl;
}
int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
