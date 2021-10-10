#include <bits/stdc++.h>

using namespace std;

const int N=1e3+10;

bool dd[N];
int edge[N][N],n,m;
vector <int> show;
int height=0;

void DFS(int x, int pre, int dem)
{
    dd[x]=0; height=max(height,dem);
    for(int i=1;i<=n;i++)
    {
        if (i==pre) continue;
        if (edge[x][i]&&!dd[i]) {cout << 0<<endl; exit(0);}
        else if (edge[x][i]&&dd[i]) DFS(i,x,dem+1);
    }
}

int main()
{
    memset(dd,true,sizeof(dd));
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin >> u >> v;
        edge[u][v]=1; edge[v][u]=1;
    }
    int p=0;
    for(int i=1;i<=n;i++) if (dd[i]) {p++;if (p>1){cout << 0<<endl; return 0;} DFS(i,i,1);}
    cout << 1 << endl;
    cout << height;
}
