#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;
int main()
{
    long long n,i,j,k,ans=0,t;
    cin>>n>>k;
    if (n==k) cout<<1<<endl;
    else
    {
        for (i=1;i<=n-k+1;i++)
        {
            t=1;
            if (i==1)
            {
                for (j=1;j<=n-k;j++) t=(t*10)%MOD;
                ans+=t;
                ans%=MOD;
            }
            else if (i==2)
            {
                t=8;
                for (j=1;j<=n-k-1;j++) t=(t*10)%MOD;
                ans+=t;
                ans%=MOD;
            }
            else
            {
                t=80;
                for (j=1;j<=i-2;j++) t=(t*9)%MOD;
                for (j=1;j<=n-k-i;j++) t=(t*10)%MOD;
                ans+=t;
                ans%=MOD;
            }
        }
    }
    cout<<ans<<endl;
}
