#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int p[maxn],s[maxn];

bool ok(int x)
{
    while(x)
        {
		int cur=x%10;
		if(cur!=4&&cur!=7) return false;
		x/=10;
	}
	return true;
}

int get(int x)
{
    if (x==p[x]) return x;
    return (p[x]=get(p[x]));
}

void _merge(int u,int v)
{
    u=get(u),v=get(v);
    if (u==v) return;
    p[u]=v;
    s[v]+=s[u];
    s[u]=0;
}

int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) p[i]=i,s[i]=1;
    for (int i=1;i<n;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        if (!ok(w)) _merge(u,v);
    }
    int ans=0;
    for (int i=1;i<=n;i++)
    {
        int cnt=n-s[get(i)];
        ans+=cnt*(cnt-1);
    }
    cout<<ans<<endl;
}
