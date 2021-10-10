#include<bits/stdc++.h>
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1e6+1;
int a[maxn],f[maxn],b[maxn],dem[maxn],ck[maxn];
vector<int> pos,vt[maxn];
vector<II> v;
int32_t main()
{
    int n,res=0,k;
    cin>>n>>k;
    for (int i=1;i<=n;i++) cin>>a[i];

    for (int i=1;i<=n;i++)
    {
        f[i]=lower_bound(b+1,b+1+res,a[i])-b;
        res=max(res,f[i]);
        b[f[i]]=a[i];
    }

    //int tmp=res;
    int ans=0;
    for (int i=n;i>=1;i--)
    {
        dem[f[i]]++;
        vt[f[i]].push_back(i);
    }
    for (int i=1;i<=n;i++)
    {
        if (!ck[f[i]])
        {
            v.push_back(II(dem[f[i]],f[i]));
            ck[f[i]]=true;
        }
    }
    sort(v.begin(),v.end());
    if (res<k)
    {
        cout<<0<<endl;
        return 0;
    }
    for (int i=0;i<res-k+1;i++)
    {
        ans+=v[i].fi;
        for (auto val:vt[v[i].se]) pos.push_back(val);
    }
    cout<<ans<<endl;
    //cout<<res<<endl;
    //cout<<pos.size()<<endl;
    for (auto val:pos) cout<<val<<" ";
}
