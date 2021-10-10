
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=100,inf=1e18;
vector<int> v;
struct cow
{
    int h,w,sk;
};
cow a[maxn];

bool cmp (cow x, cow y)
{
    if (x.sk!=y.sk) return x.sk>y.sk;
    else
    {
        if (x.w!=y.w) return x.w>y.w;
        else return x.h>y.h;
    }
}

int32_t main()
{
    freopen("guard.inp","r",stdin);
    freopen("guard.out","w",stdout);
    int n,H,ans=-1;
    cin>>n>>H;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i].h>>a[i].w>>a[i].sk;
    }
    sort(a+1,a+1+n,cmp);
    for (int mask=0;mask<(1<<n);mask++)
    {
        v.clear();
        for (int i=0;i<n;i++) if (mask&(1<<i)) v.push_back(i+1);
        int weight=0,height=0;
        for (auto val:v)
        {
            weight+=a[val].w;
            height+=a[val].h;
        }
        if (height<H) continue;
        bool ok=true;
        int res=inf;
        for (auto val:v)
        {
            weight-=a[val].w;
            if (weight<=a[val].sk)
            {
                res=min(res,a[val].sk-weight);
            }
            else
            {
                ok=false;
                break;
            }
        }
        if (ok) ans=max(ans,res);
    }
    if (ans==-1) cout<<"Mark is too tall"<<endl;
    else cout<<ans<<endl;
}
