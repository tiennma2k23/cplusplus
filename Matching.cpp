
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1<<21+1,mod=1e9+7;
int n;
int f[maxn],a[22][22];
int solve(int bit, int i)
{
    if (f[bit]!=-1) return f[bit];
    int res=0;
    for (int j=0;j<n;j++)
        if ((bit&(1<<j)) && a[i][j]) res+=solve(bit^(1<<j),i+1),res%=mod;
    f[bit]=res;
    return f[bit];
}

int32_t main()
{
    cin>>n;
    for (int i=0;i<=(1<<n);i++) f[i]=-1;
    f[0]=1;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++) cin>>a[i][j];
    cout<<solve((1<<n)-1,0)<<endl;
}
