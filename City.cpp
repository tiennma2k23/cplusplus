
#include<bits/stdc++.h>
#define int long long
using namespace std;
struct nodes
{
    int a,b,c;
};
const int maxn=2e5+1;
nodes g[maxn];

bool cmp(nodes a,nodes b)
{
    return a.a>b.a;
}
bool cmp3(nodes a,nodes b)
{
    return a.b>b.b;
}

bool cmp1(nodes a, nodes b)
{
    return a.a>b.a;
}

bool cmp2(nodes a,nodes b)
{
    return a.b>b.b;
}

int32_t main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int n=x+y+z;
    int d=0;
    for (int i=1;i<=n;i++)
    {
        cin>>g[i].a>>g[i].b>>g[i].c;
        if (g[i].b==g[i].c) d++;
    }
    if (d==n)
    {
        int ans=0;
        sort(g+1,g+1+n,cmp);
        for (int i=1;i<=x;i++) ans+=g[i].a;
        for (int i=x+1;i<=n;i++) ans+=g[i].b;

        int res=0;
        sort(g+1,g+1+n,cmp3);
        for (int i=1;i<=z+y;i++) ans+=g[i].b;
        for (int i=z+y+1;i<=n;i++) ans+=g[i].a;
        ans=max(ans,res);
        cout<<ans<<endl;
    }
    else
    {
        int ans=0;
        sort(g+1,g+1+n,cmp1);
        for (int i=1;i<=x;i++) ans+=g[i].a;
        for (int i=x+1;i<=x+y;i++) ans+=g[i].b;

        int res=0;
        sort(g+1,g+1+n,cmp2);
        for (int i=1;i<=y;i++) res+=g[i].b;
        for (int i=y+1;i<=x+y;i++) ans+=g[i].a;
        ans=max(ans,res);
        cout<<ans<<endl;
    }
}
