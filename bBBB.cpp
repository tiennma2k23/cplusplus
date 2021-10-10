#include<bits/stdc++.h>
using namespace std;
const long long MAX=1e9+7;
int main()
{
    long long n,i,t=0,ans=-MAX,a;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        t=max(t+a,a);
        ans=max(ans,t);
    }
    cout<<ans<<endl;
}
