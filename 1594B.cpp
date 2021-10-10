#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int p[35];
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int ans=0;
        int n,k;
        cin>>n>>k;
        p[0]=1;
        for (int i=1;i<=32;i++) p[i]=p[i-1]*n,p[i]%=mod;
        for (int i=0;i<=30;i++)
        {
            if ((k>>i)&1) ans+=p[i],ans%=mod;
        }
        cout<<ans<<endl;
    }
}
