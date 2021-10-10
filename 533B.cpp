#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,inf=1e18;
int f[maxn][2],val[maxn];
vector<int> gr[maxn];
void dfs(int u,int p)
{
	f[u][1]=-inf;
	for(int v:gr[u])
	{
		if(v==p)
		continue;
		dfs(v,u);
		int x0=f[u][0],x1=f[u][1];
		f[u][0]=max(x0+f[v][0],x1+f[v][1]);
		f[u][1]=max(x1+f[v][0],x0+f[v][1]);
	}
	f[u][1]=max(f[u][1],f[u][0]+val[u]);
}
int32_t main()
{
    int n,rt;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int p,a;
        cin>>p>>a;
        if (p==-1) rt=i,p++;
        gr[i].push_back(p);
        gr[p].push_back(i);
        val[i]=a;
    }
    dfs(rt,0);
    cout<<max(f[rt][0],f[rt][1])<<endl;
}
