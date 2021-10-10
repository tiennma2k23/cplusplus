#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+5;
int n, cur = 1, pr[maxn], pos[maxn];
int curr=1;
void dfs(int l, int r)
{
    int u=pr[curr],p=pos[u];
    if (l<=p-1)
    {
        curr++;
        dfs(l,p-1);
    }
    if (p+1<=r)
    {
        curr++;
        dfs(p+1,r);
    }
    cout<<u<<" ";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for (int i=1;i<=n;i++) cin>>pr[i];
    for (int i=1;i<=n;i++)
    {
        int in;
        cin>>in;
        pos[in]=i;
    }
    dfs(1,n);
}
