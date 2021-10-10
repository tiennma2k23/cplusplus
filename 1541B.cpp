#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int p[maxn],a[maxn];
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        for (int i=0; i<=n*2; i++) p[i]=-1;
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
            p[a[i]]=i;
        }
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            for (int j=1; j<=(2*n)/a[i]; j++)
            {
                if (p[j]!=-1&&j!=a[i]&&a[i]*j==(i+p[j]))ans ++ ;
            }
        }
        cout<<ans/2<<endl;
    }
}
