#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e5+1;
long long n,q,i,a[MAXN],b[MAXN],ans,u,v;
int main()
{
    cin>>n>>q;
    for (i=1;i<=n;i++) cin>>a[i]>>b[i];
    while (q--)
    {
        cin>>u>>v;
        ans=0;
        for (i=1;i<=n;i++) ans+=max(abs(u-a[i]),abs(v-b[i]));
        cout<<ans<<endl;
    }
}
