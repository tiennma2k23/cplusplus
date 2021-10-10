#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define TASK "trigrid"
using namespace std;
const ull mod=12345677;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
    // ans=a*(a+2)*(2a+1)
    long long q;
    cin>>q;
    while (q--)
    {
        ull a;
        ull ans=0;
        cin>>a;
        ull t1=a;
        ull t2=(a+2);
        ull t3=(2*a+1);
        ull tmp1=t1/8;
        t1%=8;
        ans=(ans+(((tmp1%mod)*(t2%mod))%mod*(t3%mod))%mod)%mod;
        ull tmp2=t2/8;
        t2%=8;
        ans=(ans+(((tmp2%mod)*(t1))%mod*(t3%mod))%mod)%mod;
        ull tmp3=t3/8;
        t3%=8;
        ans=(ans+((tmp3%mod)*(t1*t2))%mod)%mod;
        ans+=(t1*t2*t3)/8;
        ans%=mod;
        cout<<ans<<endl;
    }
}
