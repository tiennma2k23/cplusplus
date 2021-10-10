
#include<bits/stdc++.h>
#define int long long
using namespace std;
int w[20];
int32_t main()
{
    int c,n,ans=0;
    cin>>c>>n;
    for (int i=0;i<n;i++) cin>>w[i];
    int res=0;
    for (int j=0;j < (1<<n);j++)
    {
        int res=0;
        for (int i=0;i<n;i++)
        {
            if (j&(1<<i)) res+=w[i];
        }
        if (res<=c) ans=max(ans,res);
    }
    cout<<ans<<endl;
}
