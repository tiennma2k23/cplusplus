
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int sqr(int x)
{
    return (x*x)%mod;
}
_pow(int a,int b)
{
    if (b==0) return 1;
    if (b%2) return (sqr(_pow(a,b/2))*a)%mod;
    return sqr(_pow(a,b/2));
}
int32_t main()
{
    int k;
    cin>>k;
    int ans=6;
    ans*=_pow(16,mod-2);
    ans%=mod;
    int tmp=1;
    for (int i=1;i<=k;i++) tmp*=2;
    ans*=_pow(4,tmp);
    ans%=mod;
    cout<<ans<<endl;
}
