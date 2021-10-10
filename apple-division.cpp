
#include<bits/stdc++.h>
using namespace std;
int a[200];
int32_t main()
{
    int n;
    long long s=0;
    cin>>n;
    for (int i=0;i<n;i++) cin>>a[i],s+=1ll*a[i];
    long long ans=s;
    for (int j=0;j< 1<<n ;j++)
    {
        long long sum=0;
        for (int i=0;i<n;i++) if (j & (1<<i)) sum+=1ll*a[i];
        ans=min(ans,abs(s-2*sum));
    }
    cout<<ans<<endl;
}
