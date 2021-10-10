#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n,p,ans=0;
    while (cin>>n>>p){
            ans=0;
    for (int i=2;i<=n;i++)
    {
        int tmp=(i-1)%p;
        for (int j=1;j<=i-2;j++) tmp*=10,tmp%=p;
        ans=(ans+tmp)%p;
    }
    ans=(ans*9+n)%p;
    if (n==1) ans=1%p;
    cout<<ans<<endl;
    }
}
