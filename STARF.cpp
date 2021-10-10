#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1;
int w[maxn];
int32_t main()
{
    int q;
    cin>>q;
    while (q--){
    int n,s,ans=0;
    cin>>n>>s;
    for (int i=1;i<=n;i++) cin>>w[i];
    for (int i=1;i<=n;i++)
    {
        int v;
        cin>>v;
        if (w[i]<=s) ans+=v;
    }
    cout<<ans<<endl;
    }
}
