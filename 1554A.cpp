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
        for (int i=1;i<=n;i++)
        {

            cin>>a[i];
            if (i>1) ans=max(ans,a[i]*a[i-1]);
        }
        cout<<ans<<endl;
    }
}
