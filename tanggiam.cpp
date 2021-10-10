#include<bits/stdc++.h>
#define f1 tang
#define f2 giam
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn],f1[maxn],f2[maxn];
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        f1[i]=1;
        f2[i]=1;
    }
    for (int i=2;i<=n;i++)
    {
        for (int j=i-1;j>=1;j--)
        {
            if (a[j]<a[i]) f1[i]=max(f1[i],f1[j]+1);
            else if (a[j]>a[i]) f2[i]=max(f2[i],f2[j]+1);
        }
    }
    int tn=0,gn=0;
    for (int i=1;i<=n;i++)
    {
        tn=max(tn,f1[i]);
        gn=max(gn,f2[i]);
    }
    cout<<tn<<" "<<gn<<endl;
}
