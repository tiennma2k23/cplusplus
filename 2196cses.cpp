#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=3e5+1,N=2e5;

struct nodes
{
    int X,Y,pos;
};
bool cmp(nodes a, nodes b)
{
    if (a.X==b.X) a.Y>b.Y;
    return a.X<b.X;
}

vector<nodes> g;
set<int> v;
int fen[maxn],ans1[maxn],ans2[maxn];

int get(int x)
{
    int res=0;
    for(;x>0;x-=x&-x) res+=fen[x];
    return res;
}

void update1(int x,int val)
{
   for(;x<=N; x+=x&-x) fen[x]+=val;
}

void update2(int x)
{
    for(;x>0;x-=x&-x) fen[x]++;
}
map<int,int> d;
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        g.push_back({x,y,i});
        v.insert(y);
    }
    //map<int,int> d;
    int cnt=0;
    for (auto val:v)
    {
        d[val]=++cnt;
    }
    sort(g.begin(),g.end(),cmp);
    for (int i=n-1;i>=0;i--)
    {
        int p=d[g[i].Y];
        ans1[g[i].pos]=get(p);
        update1(p,1);
    }

    memset(fen,0,sizeof(fen));
    for (int i=0;i<n;i++)
    {
        int p=d[g[i].Y];
        ans2[g[i].pos]=get(p);
        update1(1,1);
        update1(p+1,-1);
        //update2(p);
    }

    for (int i=1;i<=n;i++) cout<<ans1[i]<<" ";
    cout<<endl;
    for (int i=1;i<=n;i++) cout<<ans2[i]<<" ";

}
