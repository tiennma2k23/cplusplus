#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=301;
int sum[maxn][maxn];
int gets(int u,int v,int x,int y)
{
    if (u>x||v>y) return 0;
    return (sum[x][y] - sum[x][v - 1] - sum[u - 1][y] + sum[u - 1][v - 1]);
}

int get(int u,int v,int i,int j)
{
    return gets(u,v,i,j)-gets(u+1,v+1,i-1,j-1);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int m,n;
    cin>>m>>n;
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            int a;
            cin>>a;
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a;
        }
    }
    int ans=-100000000;
    for (int u=1;u<=m;u++)
        for (int v=1;v<=n;v++)
    {
        for (int i=u+1;i<=m;i++)
            for (int j=v+1;j<=n;j++) {ans=max(ans,get(u,v,i,j));
            }

    }
    cout<<ans<<endl;
}
