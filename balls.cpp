#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e5+10;
int main()
{
    freopen("balls.inp","r",stdin);
    freopen("balls.out","w",stdout);
    long long n,q,i,a,d[4],ans[maxn],k;
    memset(d,0,sizeof(d));
    cin>>n>>q;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        d[a]++;
        d[2]+=d[1]/2;
        d[1]%=2;
        d[3]+=d[2]/2;
        d[2]%=2;
        ans[i]=d[1]+d[2]+d[3];
    }
    while (q--)
    {
        cin>>k;
        cout<<ans[k]<<endl;
    }
}
