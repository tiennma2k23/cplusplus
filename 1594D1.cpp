
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1;
int vs[maxn];
vector<II> gr[maxn];
int cnt,_tmp;
map<string,int> w;
bool dfs(int u)
{
    cnt++;
    for (auto val:gr[u])
    {
        int v=val.se,_w=val.fi;
        if (vs[v]==-1)
        {
            if (_w) vs[v]=1-vs[u];
            else vs[v]=vs[u];
            if (!dfs(v)) return false;
        }
        else
        {
            if ((!_w&&vs[v]!=vs[u])||(_w&&vs[v]==vs[u])) return false;
        }
    }
    _tmp+=vs[u];
    return true;
}

int32_t main()
{
    w["imposter"]=1;
    w["crewmate"]=0;
    int q;
    cin>>q;
    while (q--)
    {
        int n,m,ans=0;
        cin>>n>>m;
        for (int i=1;i<=n;i++) vs[i]=-1;
        for (int i=1;i<=n;i++) gr[i].clear();
        while (m--)
        {
            int u,v;
            string s;
            cin>>u>>v>>s;
            gr[u].push_back(II(w[s],v));
            gr[v].push_back(II(w[s],u));
        }
        for (int i=1;i<=n;i++)
        {
            if (vs[i]!=-1) continue;
            cnt=0,_tmp=0;
            vs[i]=0;
            bool ok=dfs(i);
            if (!ok)
            {
                ans=-1;
                break;
            }
            ans+=max(cnt-_tmp,_tmp);
        }
        cout<<ans<<endl;
    }
}
