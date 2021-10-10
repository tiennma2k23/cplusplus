
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=1e18;
int t[105],f[105][505];
int calc(int x,int y)
{
    int tmp=t[x]/(y+1);
    int md=t[x]%(y+1);
    int ans=(tmp+2)*(tmp+1)/2*md+(tmp*(tmp+1)/2)*(y+1-md);
    return ans;
}
vector<int> v;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,m;
    cin>>n>>m>>k;
    for (int i=0;i<=m;i++) for (int j=0;j<=k;j++) f[i][j]=inf;
    v.clear();
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        t[x]++;
        if (t[x]==1) v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<=k;i++) f[0][i]=0;
    int cur=0;
    //cout<<t[1]<<" "<<calc(1,2)<<endl;
    for (auto i:v)
    {
        for (int j=0;j<=k;j++)
        {
            for (int j1=0;j1<=j;j1++)
            {
                if (j-j1<=t[i]-1) f[i][j]=min(f[i][j],f[cur][j1]+calc(i,j-j1));
                //cout<<f[i][j]<<" "<<i<<" "<<j<<" "<<j1<<" "<<t[i]<<endl;
            }
        }
        cur=i;
    }
    //cout<<f[1][2]<<endl;
    int res=inf;
        for (int j=0;j<=k;j++) res=min(res,f[v[v.size()-1]][j]);
    cout<<res<<endl;
}
