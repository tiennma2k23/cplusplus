#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
vector<int> gr[maxn];
#define II pair<int,int>
#define fi first
#define se second
int tp;
bool vs[maxn];

void dfs(int u)
{
    tp++;
    vs[u]=true;
    for (auto v:gr[u]) if (!vs[v]) dfs(v);
}
int32_t main()
{
    cout<<"No"<<endl;
}

