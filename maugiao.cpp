#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=21;
int n,a[maxn][maxn];
II f[1<<maxn];

II _max(II P0, II P1){
    if(P0.fi == P1.fi) return II(P0.fi, P0.se + P1.se);
    if(P0.fi < P1.fi) return P1;
    else return P0;
}

int32_t main()
{
    cin>>n;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++) cin>>a[i][j];
    f[0]=II(0,1);
    for (int mask=1;mask<(1<<n);mask++)
    {
        int cnt=__builtin_popcount(mask)-1;
        for (int i=0;i<n;i++) if (mask&(1<<i))
        {
            f[mask]=hop(f[mask],II(f[mask^(1<<i)].fi+a[cnt][i],f[mask^(1<<i)].se));
        }
    }
    cout<<f[(1<<n)-1].fi<<" "<<f[(1<<n)-1].se<<endl;
}
