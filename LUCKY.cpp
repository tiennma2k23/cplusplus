#include<bits/stdc++.h>
using namespace std;
unsigned long long a[300100],t=0,ans=0,i,n;
int main()
{
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        t=t+a[i];
    }
    for (i=1;i<=n;i++) ans=ans+(t-a[i])*a[i];
    if (n==1) cout<<a[1]<<endl;
    else cout<<ans/2<<endl;
}
