#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=2e5+1;
int n,sum,a[maxn];

int solve(int x)
{
    int res=0;
    for (int i=1;i<=n;i++) if (a[i]<x) res+=x-a[i];
    res+=max(sum-x*n,0ll);
    return res;
}

int32_t main()
{
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i],sum+=a[i];
    int val=sum/n;
    int ans=min(solve(val),solve(val+1));
    //cout<<solve(val+1)<<endl;
    cout<<ans<<endl;
}
