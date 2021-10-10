
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+5;
int a[maxn];
int32_t main()
{
    int n,d;
    cin>>n>>d;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    int r=2,l=1,ans=0;
    while (r<=n)
    {
        while (l<r-1&&a[r]-a[l]>d)
        {
            l++;
        }
        if (a[r]-a[l]<=d) ans++,l+=2,r++;
        r++;
    }
    cout<<ans<<endl;
}
