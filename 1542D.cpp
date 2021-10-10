#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=501,mod=998244353;
int f[maxn][maxn],a[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,ans=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        if (ch=='+') cin>>a[i];
        else a[i]=-1;
    }
    for (int i=0;i<n;i++)
    {
        if (a[i]!=-1)
        {
            memset(f,0,sizeof(f));
            f[0][0]=1;
            for (int j=0;j<n;j++)
            {
                for (int k=0;k<n;k++)
                {
                    f[j+1][k]=(f[j+1][k]+f[j][k])%mod;
                    if (i!=j)
                    {
                        if (a[j]>=0)
                        {
                            if (a[j]<a[i]||(a[i]==a[j]&&j<i)) f[j+1][k+1]=(f[j+1][k+1]+f[j][k])%mod;
                            else f[j+1][k]=(f[j+1][k]+f[j][k])%mod;
                        }
                        else
                        {
                            if (k>0) f[j+1][k-1]+=f[j][k],f[j+1][k-1]%=mod;
                            else
                            {
                                if (j<i) f[j+1][k]+=f[j][k],f[j+1][k]%=mod;
                            }
                        }
                    }
                }
                for (int k=0;k<=n;k++) ans+=(a[i]*f[n][k])%mod,ans%=mod;
            }
        }
    }
    cout<<ans<<endl;
}
