#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int t[maxn],r[maxn],f[maxn];
int32_t main()
{
    cin>>n;
    for(int i=1; i<=n; i++) cin>>t[i];
    for(int i=1; i<n; i++) cin>>r[i];
    f[1]=t[1];
    for(int i=2; i<=n; i++)
    {
        f[i]=min(f[i-1]+t[i],f[i-2]+r[i-1]);
    }
    cout<<f[n]<<endl;
}
