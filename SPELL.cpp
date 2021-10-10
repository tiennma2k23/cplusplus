#include<bits/stdc++.h>
//#define int long long
#define II pair<int,int>
#define iII pair<int,II>
#define fi first
#define se second
using namespace std;
const int maxn=301,inf=1e6;
int f[maxn][maxn][maxn];
string s[maxn];
int k,n,m;
const int dirs[5] = {0, 1, 0, -1, 0};
bool in(int x,int y)
{
    return (1<=x && x<=m && 1<=y && y<=n);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>m>>n>>k;
    //cout<<k<<endl;
    string t;
    cin>>t;
    t=' '+t;
    for (int i=1;i<=m;i++)
    {
        cin>>s[i];
        s[i]=' '+s[i];
    }
    //memset(f,-1,sizeof(f));
    queue<tuple<int,int,int>> mat;
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++) if (s[i][j]==t[1])
    {
        mat.push({1,i,j});
        //qu.push(i);
        //qv.push(j);
        f[1][i][j]=1;
    }
    while (!mat.empty())
    {
        //int _mat=(mat.front()).fi;//;mat.pop();
        //int u=qu.front();qu.pop();
        //int v=qv.front();qv.pop();
        //int u=(mat.front()).se.fi;
        //int v=(mat.front()).se.se;
        //int mat,u,v;
        auto [_mat,u,v]=mat.front();
        mat.pop();
        if (_mat==k)
        {
            //ans=min(ans,f[_mat][u][v]);
            //continue;
            cout<<f[_mat][u][v]<<endl;
            return 0;
        }
        for (int j=0;j<4;j++)
        {
            int uu=u+dirs[j];
            int vv=v+dirs[j+1];
        if (!in(uu,vv)) continue;
        int _mat2=_mat;
        if (t[_mat2+1]==s[uu][vv]) _mat2++;
        if (f[_mat2][uu][vv]==0)
        {
            f[_mat2][uu][vv]=f[_mat][u][v]+1;
            mat.push({_mat2,uu,vv});
            //qu.push(u);
            //qv.push(v);
        }
        }
    }
    //if (ans!=inf)cout<<ans<<endl;
     cout<<-1<<endl;
}
