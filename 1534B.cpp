
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5e5+5;
int a[maxn];
void process()
{
    int n,ans=0;
    cin>>n;
    a[n+1]=0;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n; i++)
    {
        if (a[i]>a[i-1]&&a[i]>a[i+1])
        {
            int res=a[i]-max(a[i-1],a[i+1]);
            ans+=res;
            a[i]=max(a[i-1],a[i+1]);
        }
    }
    for (int i=1; i<=n+1; i++) ans+=abs(a[i]-a[i-1]);
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) process();
}
