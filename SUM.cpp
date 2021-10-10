#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1,mod=1e9+7;
int psum[maxn],h[maxn],p_psum[maxn];
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        psum[i]=psum[i-1]+a;
        psum[i]%=mod;
    }
    for (int i=1;i<=n;i++) p_psum[i]=p_psum[i-1]+psum[i],p_psum[i]%=mod;
    int ans=0;
    for (int i=1;i<=n;i++)
    {
        h[i]=((p_psum[n]-p_psum[i-1]+mod)%mod-p_psum[n-i]+mod)%mod;
        int tmp=(h[i]*i)%mod;
        tmp=(tmp*i)%mod;
        tmp=(tmp*i)%mod;
        ans=(ans+tmp)%mod;
    }
    cout<<ans<<endl;
}
