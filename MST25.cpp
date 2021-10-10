#include<bits/stdc++.h>
using namespace std;
const long long MAXN=10100,MAX=1e9;
int m,n,a[MAXN][MAXN],t[2*MAXN],i,j,u,v,c,ans=0;
map<long long,long long> dem;
void Prim()
{
    int i,j,s,u,v,k,mink,g[MAXN],d[MAXN];
    for (i=1;i<=2*(n-1);i++) t[i]=0;
    j=0;
    d[1]=g[1]=-1;
    for (v=2;v<=n;v++)
    {
        g[v]=1;
        d[v]=a[1][v];
    }
    for (i=2;i<=n;i++)
    {
        mink=MAX;
        for (k=2;k<=n;k++)
            if (d[k]!=-1&&d[k]<mink)
        {
            mink=d[k];v=k;u=g[v];
        }
        t[j+1]=u;t[j+2]=v;j=j+2;d[v]=g[v]=-1;ans=ans+a[u][v];
        //dem[ans]++;
        //cout<<u<<" "<<v<<endl;
        for (k=2;k<=n;k++)
        {
            if (d[k]!=-1&&a[v][k]<d[k])
            {
                d[k]=a[v][k];
                g[k]=v;
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for (i=1;i<=m;i++)
    {
        cin>>u>>v>>c;
        a[u][v]=c;
        a[v][u]=c;
    }
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++) if (a[i][j]==0) a[i][j]=MAX;

    Prim();cout<<ans/*<<" "<<dem[ans]*/<<endl;
}
