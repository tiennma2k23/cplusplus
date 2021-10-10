#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define se second
#define fi first
using namespace std;
const int maxn=2e5+1;
struct nodes
{
    int X,Y,cnt;
};
nodes p[maxn];
II g[maxn];
bool vs[maxn];

bool cmp(II a, II b)
{
    return (a.fi*a.fi+a.se*a.se)<(b.fi*b.fi+b.se*b.se);
}

bool cmp2(nodes a, nodes b)
{
    return (a.X*a.X+a.Y*a.Y)<(b.X*b.X+b.Y*b.Y);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int k,r;
    cin>>k>>r;
    int m;
    cin>>m;
    vector<int> v;
    v.clear();
    int s=1<<m;
    for (int mask=0;mask<s;mask++) if (__builtin_popcount(mask)<=k) v.push_back(mask);
    cout<<v.size()<<endl;
    for (int i=0;i<m;i++)
    {
        cin>>g[i].fi>>g[i].se;
    }
    sort(g,g+m,cmp);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>p[i].X>>p[i].Y>>p[i].cnt;
    }
    sort(p+1,p+1+n,cmp2);
    int ans=0;
    for (int mask:v)
    {
        for (int i=1;i<=n;i++) vs[i]=false;
        int res=0,j=1;
        for (int i=0;i<m;i++) if (mask&(1<<i))
        {
            while (j<=n)
            {
                int dist=(p[j].X-g[i].fi)*(p[j].X-g[i].fi)+(p[j].Y-g[i].se)*(p[j].Y-g[i].se);
                if (dist<=r*r)
                {
                    res+=p[j].cnt;
                }
                else break;
                j++;
            }
        }
        ans=max(ans,res);
    }
    cout<<ans<<endl;
}
