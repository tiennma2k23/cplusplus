#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1<<22;
II f[maxn];
int a[22];
int32_t main()
{
    //f[i].fi la so luong
    //f[i].se la khoi luong
    int n,x;
    cin>>n>>x;
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<(1<<n);i++) f[i]=II(n+1,0);
    f[0]=II(0ll,x+1);
    for (int mask=1;mask<(1<<n);mask++)
    {
        for (int i=0;i<n;i++)
        {
            if (mask&(1<<i))
            {
                II tmp=f[mask^(1<<i)];
                if (tmp.se+a[i]>x)
                {
                    f[mask]=min(f[mask],II(tmp.fi+1,a[i]));
                }
                else f[mask]=min(f[mask],II(tmp.fi,tmp.se+a[i]));
            }
        }
    }
    cout<<f[(1<<n)-1].fi<<endl;
}
