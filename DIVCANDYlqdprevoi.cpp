#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1e6+1,inf=1e18;
int ans[maxn],a[maxn],n,k,L[maxn],pos[maxn];
set<int> st;
vector<int> v,v1;
II f[maxn];
int sum;
bool ok[maxn];
void sub1()
{
    for (int i=0;i<n;i++) a[i]=a[i+1];
    int tb=sum/k;
    for (int i=0;i<(1<<n);i++) f[i]=II(n+1,0);
    f[0]=II(0ll,tb+1);
    for (int mask=1;mask<(1<<n);mask++)
    {
        for (int i=0;i<n;i++)
        {
            if (mask&(1<<i))
            {
                II tmp=f[mask^(1<<i)];
                if (tmp.se+a[i]>tb)
                {
                    f[mask]=min(f[mask],II(tmp.fi+1,a[i]));
                    //if (!ans[i]) ans[i]=f[mask].fi;
                    //ans[i]=f[mask].fi;
                    if (f[mask]==II(tmp.fi+1,a[i])) ans[i]=f[mask].fi;
                }
                else
                {
                    f[mask]=min(f[mask],II(tmp.fi,tmp.se+a[i]));
                    //if (ans[i]==0) ans[i]=f[mask].fi;
                    //ans[i]=f[mask].fi;
                    if (f[mask]==II(tmp.fi,tmp.se+a[i])) ans[i]=f[mask].fi;
                }
                cerr<<f[mask].fi<<" "<<f[mask].se<<endl;
            }
            //if (!ans[i]) ans[i]=f[mask].fi;
        }
    }
    //cout<<f[(1<<n)-1].fi<<endl;
    if (f[(1<<n)-1].fi==k)
    {
        for (int i=1;i<(1<<n);i++) cout<<f[i].fi<<" "<<f[i].se<<endl;
    }
    else cout<<-1<<endl;
}

void sub2()
{
    L[0]=1;
    int tb=sum/k;
    for (int i=1; i<=n; i++) v.push_back(i),st.insert(i);
    for (int j=1; j<=k; j++)
    {
        for (int i=1; i<=tb; i++) L[i]=0,pos[i]=0;
        for (int i=0; i<v.size(); i++) for (int t=tb; t>=a[v[i]]; t--)
            {
                if (L[t]==0&&L[t-a[v[i]]]==1)
                {
                    L[t]=1;
                    //trace[t]=pos[t-a[v[i]];
                    pos[t]=v[i];
                }
            }
        if (!L[tb])
        {
            cout<<-1<<endl;
            return;
        }
        int t=tb;
        while (t>0)
        {
            ans[pos[t]]=j;
            st.erase(pos[t]);
            t-=a[pos[t]];
        }
        v.clear();
        for (auto val:st) v.push_back(val);
    }
    for (int i=1; i<=n; i++) cout<<ans[i]<<" ";
}

void sub3()
{
    sort(a+1,a+1+n);
    int tb=sum/k;
    for (int j=1; j<=k; j++)
    {
        int t=tb;
        while (t>0)
        {
            for (int i=n; i>=1; i--)
            {
                if (t>=a[i]&&!ok[i]) v.push_back(i),t-=a[i];
                if (t==0) break;
            }
            if (t!=0)
            {
                cout<<-1<<endl;
                return;
            }
        }
        for (auto val:v) ans[val]=j,ok[val]=1;
        v.clear();
    }
    for (int i=1; i<=n; i++) cout<<ans[i]<<" ";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int maxx=-inf;
    cin>>n>>k;
    for (int i=1; i<=n; i++) cin>>a[i],sum+=a[i],maxx=max(maxx,a[i]);
    if (sum%k)
    {
        cout<<-1<<endl;
        return 0;
    }
    if ((sum/k)<maxx)
    {
        cout<<-1<<endl;
        return 0 ;
    }
    if (n<=20) sub1();
    else if (k==3&&n<=100) sub2();
    else sub3();
}
