#include<bits/stdc++.h>
#define int unsigned long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=110,inf=ULLONG_MAX;

int d[maxn];
vector<II> a;

bool ok(int x)
{
    for (auto val:a)
    {
        int tmp=val.fi,res=0,_x=x;
        while (_x)
        {
            _x/=tmp;
            res+=_x;
            if (res>=val.se) break;
        }
        if (res<val.se) return false;
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    a.clear();
    for (int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        for (int j=2;j*j<=x;j++)
        {
                while (x%j==0)
                {
                    d[j]+=y;
                    x/=j;
                }
        }
        if (x!=1) d[x]+=y;
    }
    for (int i=1;i<=100;i++) if (d[i])
    {
        a.push_back(II(i,d[i]));
        d[i]=0;
    }
    int l=1,r=inf-1;
    int ans=1;
    while (true)
    {
        if (ok(ans))
        {
            cout<<ans<<endl;
            return;
        }
    }
}
int32_t main()
{
    //freopen("fracvdiv.inp","r",stdin);
    //freopen("fracvdiv.out","w",stdout);
    int t;
    cin>>t;
    while (t--) solve();
}
