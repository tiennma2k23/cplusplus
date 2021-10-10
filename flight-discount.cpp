#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1,inf=1e18;
vector<II> inp[maxn],out[maxn];
int d_1[maxn],d_n[maxn];
priority_queue<II> q;
int n;
bool vs[maxn];
void dijsktra_1()
{
    //q.clear();
    for (int i=1;i<=n;i++) d_1[i]=inf,vs[i]=false;
    d_1[1] = 0;
	q.push(II(0,1));
	while (!q.empty())
	{
		int u=q.top().se;
		q.pop();
		if (vs[u]) continue;
		vs[u] = true;
		for (auto i:out[u])
		{
			int v=i.fi,w=i.se;
			if (d_1[u]+w<d_1[v])
			{
				d_1[v]=d_1[u]+w;
				q.push(II(-d_1[v], v));
			}
		}
	}
}

void dijsktra_n()
{
    for (int i=1;i<=n;i++) d_n[i]=inf,vs[i]=false;
    d_n[n]=0;
	q.push(II(0,n));
	while (!q.empty())
	{
		int u=q.top().se;
		q.pop();
		if (vs[u]) continue;
		vs[u] = true;
		for (auto i:inp[u])
		{
			int v=i.fi,w=i.se;
			if (d_n[u]+w<d_n[v])
			{
				d_n[v]=d_n[u]+w;
				q.push(II(-d_n[v], v));
			}
		}
	}
}
int32_t main()
{
    int m;
    cin>>n>>m;
    while (m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        out[u].push_back(II(v,w));
        inp[v].push_back(II(u,w));
    }
    dijsktra_1();
    dijsktra_n();
    int ans=d_1[n];
	for (int u=1;u<=n;u++)
	{
		for (auto i:out[u])
		{
			int v=i.fi,w=i.se;
			ans = min(ans,d_1[u]+d_n[v]+w/2);
		}
	}
	cout<<ans<<endl;
}
