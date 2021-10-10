#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=5e4+1;

int r[maxn][6],dem[maxn];

bool cmp(int x,int y)
{
    int dx=0,dy=0;
    for(int j=1; j<=5; ++j)
    {
        if(r[x][j]<r[y][j]) ++dx;
        else if(r[x][j]>r[y][j]) ++dy;
    }
    return (dx>=3);
}

bool ok(int a,int b)
{
    int cnta=0,cntb=0;
    for(int j=1; j<=5; ++j)
    {
        if(r[a][j]<r[b][j]) cnta++;
        else if(r[a][j]>r[b][j]) cntb++;
    }
    return cntb>=3;
}

void solve()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)dem[i]=0;
    vector<int> v;
    v.clear();
    for(int i=1; i<=n; ++i)
    {
        dem[i]=0;
        for(int j=1; j<=5; ++j)
        {
            cin>>r[i][j];
        }
        v.push_back(i);
    }
    sort(v.begin(),v.end(),cmp);
    bool ck=true;
    for(int i=1; i<n; i++)
    {
        if(!ok(v[i],v[0]))
        {
            ck=false;
            break;
        }
    }
    if(!ck) cout<<-1<<endl;
    else cout<<v[0]<<endl;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
