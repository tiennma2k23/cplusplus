#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001],n,m,ans=-1e9,i,j,t;;
    cin>>m>>n;
    for(i=1; i<=n; i++)cin>>a[i];
    for(i=1; i<=n; i++)
    {
        t=a[i];
        for(j=i+1; j<=n; j++)
        {
            if(t+a[j]<=m)t=t+a[j];
        }
        ans=max(ans,t);
    }
   cout<<ans<<endl;
}
