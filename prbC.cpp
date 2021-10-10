#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;
long long f[100000][20];
int main()
{
    long long n,q,i,p[32],k,l,r,a[100000];
    unsigned long long ans;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        f[i][0]=a[i]%MOD;
    }
    p[0]=1;
    for (i=1;i<=31;i++) p[i]=p[i-1]*2;
    for (k=1;k<=(long long)log2(n);k++)
        for (i=1;i<=n-p[k-1]+1;i++) f[i][k]=(f[i][k-1]*f[i+p[k-1]][k-1])%MOD;
    cin>>q;
    while (q--)
    {
        cin>>l>>r;
        ans=1;
        while (l<=r)
        {
            long long sz=lower_bound(p,p+31,r-l+1)-p-1;
            if (sz==-1)
            {
                l++;
                ans=(ans*a[r])%MOD;
            }
            else
            {
                ans=(ans*f[l][sz])%MOD;
                l=l+p[sz];
            }
        }
        cout<<ans<<endl;
    }
}
