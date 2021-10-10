#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn];
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n,ans=0;
        cin>>n;
        int res=0;
        for (int i=1;i<=n;i++) cin>>a[i];
        for (int i=1;i<n;i++) res+=(a[i]<=a[i+1]);
            if (res==n-1)
            {
                cout<<0<<endl;
                continue;
            }
        for (int i=1;i<=maxn;i++)
        {
            ans++;
            if (i%2==1)
            {
                for (int j=1;j<n;j++) if (j%2)
                {
                    if (a[j]>a[j+1]) swap(a[j],a[j+1]);
                }
            }
            else for (int j=1;j<n;j++) if (j%2==0)
                {
                    if (a[j]>a[j+1]) swap(a[j],a[j+1]);
                }
                int res=0;
            for (int j=1;j<n;j++) res+=(a[j]<=a[j+1]);
            if (res==n-1) break;
        }
        cout<<ans<<endl;
    }
}
