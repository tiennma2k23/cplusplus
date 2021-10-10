
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=21;
int a[maxn],b[maxn];
II f[1<<maxn];
int32_t main()
{
    freopen("bank.in","r",stdin);
    freopen("bank.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<m;i++) cin>>b[i];
    for (int mask=0;mask<(1<<m);mask++)
    {
        for (int i=0;i<m;i++)
        {
            if (mask&(1<<i))
            {
                II tmp=f[mask^(1<<i)];
                if (tmp.se+b[i]==a[tmp.fi]) f[mask]=max(f[mask],II(tmp.fi+1,0));
                else f[mask]=max(f[mask],II(tmp.fi,tmp.se+b[i]));
            }
        }
    }
    if (f[(1<<m)-1].fi==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
