#include<bits/stdc++.h>
using namespace std;
#define int long long
#define II pair<int,int>
#define fi first
#define se second
#define TASK "BITSTR"
const int maxn=2e5+1,inf=1e9+1;
int n,k;
string s;
II f[maxn][3];
bool ok(string x)
{
    int res=1;
    for (int i=1;i<n;i++) if (x[i]!=x[i-1]) res++;
    return (res<=k);
}

void sub1()
{
    int ans=inf;
    for (int mask=0;mask<(1<<n);mask++)
    {
        string s1=s;
        for (int i=0;i<n;i++)
        {
            if (mask&(1<<i))
            {
                if (s1[i]=='0') s1[i]='1';
                else s1[i]='0';
            }
        }
        //if (s1=="0000000000") cout<<ok(s1)<<endl;
        //cout<<s1<<ans<<ok(s1)<<endl;
        if (ok(s1)) ans=min(ans,1ll*__builtin_popcount(mask));
        //if (ans==2) cout<<s1<<endl;
    }
    cout<<ans<<endl;
    //return ;
}
II _min(II a,II b)
{
    if (a.fi<=k&&b.fi<=k)
    {
        if (a.se>b.se) return b;
        else if (a.se==b.se)
        {
            if (a.fi>b.fi) return a;
            return b;
        }
        return a;
    }
    return min(a,b);
}
int sub2()
{
    //#define min _min
    if (ok(s))
    {
        return 0;
    }
    for (int i=0;i<=n;i++) f[i][0]=II(inf,inf),f[i][1]=II(inf,inf);
    s=' '+s;
    if (s[1]=='0') f[1][0]=II(1,0),f[1][1]=II(1,1);
    else f[1][0]=II(1,1),f[1][1]=II(1,0);
    for (int i=2;i<=n;i++)
    {
        II tmp=f[i-1][0];
        int cur=tmp.fi,sw=tmp.se;
        if (s[i]=='1')
        {
            f[i][1]=_min(f[i][1],II(cur+1,sw));
            f[i][0]=_min(f[i][0],II(cur,sw+1));
        }
        else
        {
            f[i][1]=_min(f[i][1],II(cur+1,sw+1));
            f[i][0]=_min(f[i][0],II(cur,sw));
        }

        tmp=f[i-1][1];cur=tmp.fi,sw=tmp.se;
        if (s[i]=='1')
        {
            f[i][1]=_min(f[i][1],II(cur,sw));
            f[i][0]=_min(f[i][0],II(cur+1,sw+1));
        }
        else
        {
            f[i][1]=_min(f[i][1],II(cur,sw+1));
            f[i][0]=_min(f[i][0],II(cur+1,sw));
        }
    }
    int ans=inf;
    //#define min min
    if (f[n][0].fi<=k) ans=min(ans,f[n][0].se);
    if (f[n][1].fi<=k) ans=min(ans,f[n][1].se);
    return ans;
}
struct nodes
{
    int d,bd,fn;
};
nodes cnt[maxn];
bool cmp (nodes a,nodes b)
{
    return a.d<=b.d;
}
int sub3()
{
    cnt[1].d=1;
    int dem=1;
    cnt[1].bd=0;
    for (int i=1;i<n;i++)
    {
        if (s[i]==s[i-1]) cnt[dem].d++,cnt[dem].fn=i;
        else
        {
            dem++;
            cnt[dem].d=1;
            cnt[dem].bd=i;
        }
    }
    sort(cnt+1,cnt+dem+1,cmp);
    //cout<<dem<<endl;
    int pos=1,ans=0;
    while (dem>k)
    {
        ans+=cnt[pos].d;
        if (cnt[pos].bd==0||cnt[pos].fn==n-1) dem--;
        else dem-=2;
        pos++;
    }
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    cin>>n>>k;
    cin>>s;
    if (n<=15) sub1();
    else cout<<min(sub2(),sub3())<<endl;
}
