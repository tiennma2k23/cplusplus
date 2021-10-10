#include<bits/stdc++.h>
using namespace std;
 long long n,a[1000000],d[1000000],ans=0,i,j;
int main()
{
    freopen("LDS.inp","r",stdin);
    freopen("LDS.out","w",stdout);
    cin>>n;
    for (i=1;i<=n;i++)
        cin>>a[i];
    for (i=1;i<=n;i++)
    {
        d[i]=1;
        for (j=i-1;j>=1;j--)
            if (a[i]%a[j]==0) d[i]=max(d[i],d[j]+1);
        ans=max(ans,d[i]);
    }
    cout<<ans<<endl;

}
