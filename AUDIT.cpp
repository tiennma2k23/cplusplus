
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1,inf=1e9;
int l[maxn],c[maxn];
struct nodes
{
    int time,dt,cr;
};
nodes g[maxn];
bool cmp( nodes a, nodes b)
{
    return a.time>b.time;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,t,cnt=0;
    cin>>n>>t;
    for (int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if (a!=0)
        {
            if (b==0)
            {
                cnt++;
                g[cnt]={inf,a,b};
            }
            else
            {
                cnt++;
                g[cnt]={a/b,a,b};
            }
        }
    }
    sort(g+1,g+1+cnt,cmp);
    for (int i=1;i<=cnt;i++)
    {
        l[i]=l[i-1]+g[i].dt;
        c[i]=c[i-1]+g[i].cr;
    }
    int ri=cnt;
    for (int i=0;i<=t;i++)
    {
        while (g[ri].time<i) ri--;
        int ans=l[ri]-c[ri]*i;
        cout<<ans<<endl;
    }
}

