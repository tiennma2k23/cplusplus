#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int f[maxn],n;
struct nodes
{
    int l,r,p;
};

bool cmp (nodes x,nodes y)
{
    return x.r<y.r;
}
nodes a[maxn];
int32_t main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i].l>>a[i].r>>a[i].p;
    }
    sort(a+1,a+1+n,cmp);
    f[0]=0;
    f[1]=a[1].p;
    for (int i=2;i<=n;i++)
    {
        int l=1,r=i-1,pos=0;
        while (l<=r)
        {
            int mid=(l+r)/2;
            if (a[mid].r<a[i].l) l=mid+1,pos=mid;
            else r=mid-1;
        }
        f[i]=max(f[i-1],f[pos]+a[i].p);
    }
    cout<<f[n]<<endl;
}
