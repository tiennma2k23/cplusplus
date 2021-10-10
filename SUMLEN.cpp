#include<bits/stdc++.h>
using namespace std;
const unsigned long long mod=1e9+7,maxn=1e5+10;
long long t[maxn],sum[maxn];
int main()
{
    unsigned long long tmp,i,n,ans=0,a;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        t[1]+=a;
        t[1]%=mod;
        sum[i]=t[1];
    }
    for (i=2;i<=n;i++)
    {
        t[i]=(t[i-1]+(sum[n-i+1]-sum[i-1]+mod))%mod;
        tmp=(i*i)%mod;
        tmp=(tmp*i)%mod;
        ans+=(t[i]*tmp)%mod;
        ans%=mod;
        //cout<<t[i]<<" "<<t[1]<<endl;
    }
    ans=(ans+t[1])%mod;
    cout<<ans<<endl;
}
