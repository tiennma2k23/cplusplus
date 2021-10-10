#include<bits/stdc++.h>
using namespace std;
long long i,n,a[6000],d[6000],j,dem,ans=0,dem1,c[6000];
map<long long,long long> nho;
long long bsearch(long long *b,long long key, long long l,long long r)
{
    long long ans=l-1;
    while (l<=r)
    {
        long long mid=(l+r)/2;
        if (b[mid]<key)
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    a[0]=-1e9-1;
    dem=0;
    for (i=1;i<=n;i++)
    {
            if(a[i]!=a[i-1]) d[i]=1;
            else d[i]=d[i-1]+1;
            if (d[i]==3) ans++;
    }
    for (i=1;i<=n;i++)
    {
        if (d[i]==1)
        {
            dem1++;
            c[dem1]=a[i];
            nho[a[i]]=dem1-1;
        }
    }
    for (i=1;i<dem1-1;i++)
    {
        for (j=i+1;j<dem1;j++)
        {
            long long key=c[i]+c[j];
            long long vt=bsearch(c,key,j+1,dem1);
            ans=ans+vt-j;
        }
    }
    for (i=1;i<=n;i++)
    {
        if (d[i]==2)
        {
            long long vt=bsearch(a,a[i]*2,1,n);
            ans=ans+nho[a[vt]];
        }
    }
    cout<<ans<<endl;
}
