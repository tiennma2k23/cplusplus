#include<bits/stdc++.h>
#define int long long
using namespace std;
int f[17][1<<17],a[20];
int32_t main()
{
    int n,k;
    cin>>n>>k;
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++) f[i][1<<i]=1;
    for (int mask=0;mask< (1<<n);mask++)
    {
        for (int i=0;i<n;i++) if (mask&(1<<i))
        {
            for (int j=0;j<n;j++)
            {
                if (mask&(1<<j) && abs(a[i]-a[j])>k)
                {
                    f[i][mask]+=f[j][mask^(1<<i)];
                }
            }
        }
    }
    int ans=0;
    for (int i=0;i<n;i++) ans+=f[i][(1<<n)-1];
    cout<<ans<<endl;
}
