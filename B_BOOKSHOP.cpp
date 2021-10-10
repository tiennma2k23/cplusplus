#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200001];
int32_t main()
{
    int n,ans=0;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    reverse(a+1,a+1+n);
    for (int i=1;i<=n;i++) if (i%3) ans+=a[i];
    cout<<ans<<endl;
}
