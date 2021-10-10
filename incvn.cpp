#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1,mod=5e6;
int f[maxn][60],fen[maxn][60],a[maxn];
vector<int> v;

void update(int u,int val,int id)
{
    for (int i=u;i<maxn;i+=(i&(-i))) fen[i][id]+=val,fen[i][id]%=mod;
}

int get(int x,int id)
{
    int ans=0;
    while (x>0)
    {
        ans+=fen[x][id];
        x-=(x&(-x));
        ans%=mod;
    }
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k,ans=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++) cin>>a[i],v.push_back(a[i]);
    sort(v.begin(),v.end());
    for (int i=1;i<=n;i++)
    {
        int x=lower_bound(v.begin(),v.end(),a[i])-v.begin();
        for (int j=1;j<=k;j++)
        {
            if (j==1) f[i][j]=1;
            else f[i][j]=get(x,j-1);
            update(x+1,f[i][j],j);
        }
        ans=(ans+f[i][k])%mod;
    }
    cout<<ans<<endl;
}
