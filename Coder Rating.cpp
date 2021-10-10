#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+5;
int ans[300005],f[maxn];
struct node
{
    int x,y,id;
};
node a[300005];
int cmp(node a, node b)
{
    if (a.x!=b.x) return a.x<b.x;
    return a.y<b.y;
}

void update(int x)
{
    while(x <maxn){
        f[x]++;
        x += x & -x;
    }
}

int get(int x){
    int res = 0;
    while(x > 0){
        res += f[x];
        x -= x & -x;
    }
    return res;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
        a[i].x++,a[i].y++;
        a[i].id=i;
    }
    sort(a+1,a+1+n,cmp);
    for (int i=1;i<=n;i++)
    {
        if (i>0&&a[i].x==a[i-1].x&&a[i].y==a[i-1].y)
        {
            ans[a[i].id]=ans[a[i-1].id];
            update(a[i].y);
            continue;
        }

        ans[a[i].id]=get(a[i].y);
        update(a[i].y);
    }
    for (int i=1;i<=n;i++) cout<<ans[i]<<'\n';
}
