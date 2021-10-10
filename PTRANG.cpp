
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,inf=1e9+1;
int f[maxn],w[maxn];
int32_t main()
{
    int n,l;
    cin>>n>>l;
    for (int i=1;i<=n;i++)
    {
        cin>>w[i];
        w[i]+=w[i-1];
    }
    memset(f,inf,sizeof(f));
    f[0]=0;
    for (int i=1;i<=n;i++)
    {

        for (int j=i-1;j>=0;j--)
        {
            if (w[i]-w[j]>l) break;
            f[i]=min(f[i],max(f[j],l-(w[i]-w[j])));
        }
    }
    cout<<f[n]<<endl;
}
