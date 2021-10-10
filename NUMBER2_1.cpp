#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[200100],i,n,ans=0,t;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    i=1;
    while (i<=n)
    {
        ans=ans+(a[i]+a[i+1])/2;
        i+=2;
    }
    cout<<ans<<endl;
}
