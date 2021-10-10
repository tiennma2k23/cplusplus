
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn];
int32_t main()
{
    int n;
    cin>>n;
    int ans=0;
    for (int i=1;i<=n;i++)
    {
        int d;
        cin>>a[i]>>d;
        ans+=d;
    }
    sort(a+1,a+1+n);
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        sum+=a[i];
        ans-=sum;
    }
    cout<<ans<<endl;
}
