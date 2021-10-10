
#include<bits/stdc++.h>
//#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
int dr[] = {-1, 0, 0, 1};
int dc[] = {0, 1, -1, 0};
const int maxn=1e5+1,inf=1e9;
struct nodes
{
    int X,Y,time;
};
bool cmp(nodes a, nodes b)
{
    return a.time<b.time;
}

nodes g[maxn];
int a[305][305],n,t[305][305];
void prepare()
{
    for (int i=0;i<n;i++)
    {
        int u=g[i].X,v=g[i].Y,w=g[i].time;
        if (t[u][v] == inf) t[u][v] = w;
    for (int j = 0; j < 4; j++) {
        int k = u + dr[j];
        int h = v + dc[j];
        if (k < 0 || h < 0) continue;
        if (t[k][h] == inf) t[k][h] = w;
        else t[k][h] = min(t[k][h], w);
    }
    }
}

int main()
{
    int mat=0,mah=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>g[i].X>>g[i].Y>>g[i].time;
        mat=max(mat,g[i].X);
        mah=max(mah,g[i].Y);cout<<g[i].X<<endl;
    }

    memset(t,inf,sizeof(t));
    memset(a,0x3f,sizeof(a));
    for (int i=0;i<n;i++)
        for (int j=i+1;j<n;j++) if (g[i].time>g[j].time) swap(g[i],g[j]);
    //prepare();
    for (int i=0;i<n;i++)
    {
        int u=g[i].X,v=g[i].Y,w=g[i].time;
        if (t[u][v] == inf) t[u][v] = w;
    for (int j = 0; j < 4; j++) {
        int k = u + dr[j];
        int h = v + dc[j];
        if (k < 0 || h < 0) continue;
        if (t[k][h] == inf) t[k][h] = w;
        else t[k][h] = min(t[k][h], w);
    }
    }
    queue<int> dq;
    dq.push(0ll);
    dq.push(0ll);
    a[0][0]=0;
    int ans=inf;
    while (!dq.empty())
    {
        int xx=dq.front();
        dq.pop();
        int yy=dq.front();
        dq.pop();
        for (int i = 0; i < 4; i++) {
            int u = xx + dr[i];
            int v = yy + dc[i];
            if (u > mat+2 || v > mah+2||u < 0 || v < 0 || a[u][v] < inf) continue;
            if (a[xx][yy] + 1 < t[u][v]) {
                a[u][v] = a[xx][yy]+1;
                if (t[u][v] == inf) ans = min(ans, a[u][v]);
                dq.push(u);
                dq.push(v);
            }
            cout<<xx<<" "<<yy<<" "<<u<<" "<<v<<endl;
        }
    }
    cout<<ans<<endl;

}
