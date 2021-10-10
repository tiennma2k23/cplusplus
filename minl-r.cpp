#include<bits/stdc++.h>
using namespace std;
long long f[100000][200];
int main()
{
    long long n,i,a[100000],p[32],k,q,l,r;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        f[i][0]=a[i];
    }
    p[0]=1;
    for (i=1;i<=31;i++) p[i]=p[i-1]*2;
    for (k=1;k<=(long long) log2(n);k++)
    {
        for (i=1;i<=n-p[k-1]+1;i++) f[i][k]=min(f[i][k-1],f[i+p[k-1]][k-1]);
    }
    cin>>q;
    while (q--)
    {
        cin>>l>>r;
        int sz=lower_bound(p,p+31,r-l+1)-p-1;
        if (sz!=-1) cout<<min(f[l][sz],f[r-p[sz]+1][sz])<<endl;
        else cout<<a[l]<<endl;
    }
}
