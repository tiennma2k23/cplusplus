
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define IIi pair<II,int>
#define fi first
#define se second
using namespace std;
const int maxn=2001;
int n,a[maxn],p[maxn],ans1[maxn],ans2[maxn];
vector<IIi> g;
void findmin(int i)
{
    int r[3],rj[3];
    r[0]=g[i].fi.fi;
    r[1]=g[i].fi.se;
    r[2]=n;
    sort(r,r+3);

    int d=1;
    int ans=0;

    for (int j=0;j<n;j++)
    {
        if (i==j) continue;
        rj[0]=g[j].fi.fi;
        rj[1]=g[j].fi.se;
        rj[2]=d;
        sort(rj,rj+3);
        for (int z=2;z>=0;z--)
        {
            if (r[z]>rj[z])
            {
                d++;ans++;break;
            }
            else if (r[z]<rj[z]) break;
        }

    }
    ans2[g[i].se]=ans+1;
    return;
}

void findmax(int i)
{
    int r[3],rj[3];
    r[0]=g[i].fi.fi;
    r[1]=g[i].fi.se;
    r[2]=1;
    sort(r,r+3);
    int d=2;
    int ans=0;
    for (int j=0;j<n;j++)
    {
        if (i==j) continue;
        while (d<=n)
        {
            rj[0]=g[j].fi.fi;
            rj[1]=g[j].fi.se;
            rj[2]=d;
            sort(rj,rj+3);
            int ok=0;
            for (int z=2;z>=0;z--)
            {
                if (r[z]>rj[z]) ok++;
                else if (r[z]<rj[z]) break;
            }
            if (r[2] == rj[2] + 1 && rj[2] == rj[1] && ((rj[0] == r[1] + 1 && r[1] == r[0]) || rj[0] > r[1])) ok = 0;
            if (ok) d++;
            else break;
        }
        if (d<=n) ans++;
        d++;
    }
    ans1[g[i].se]=n-ans;
    return;
}
/*bool cmp(nodes a,nodes b)
{
    return a.r1>b.r1;
}*/
int32_t main()
{
    cin>>n;
    for (int i=1;i<=n;i++) cin>>p[i];
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++) g.push_back({{max(a[i],p[i]),min(a[i],p[i])},i});
    sort(g.begin(),g.end(),greater<>());
    for (int i=0;i<n;i++)
    {
        findmax(i);
        findmin(i);
    }
    for (int i=1;i<=n;i++) cout<<ans1[i]<<" "<<ans2[i]<<endl;
}
