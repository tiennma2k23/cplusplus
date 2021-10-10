#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1,inf=1e9+1;
set<II> s;
int n;
int am[maxn],a[maxn],b[maxn],duong[maxn],v[maxn];
void prepare0()
{
    int tmp=1;
    s.insert(II(tmp,0));
    for (int i=1;i<=32;i++)
    {
        tmp*=2;
        s.insert(II(tmp,i));
    }
}

void prepare1()
{
    for (int i=1;i<=n;i++)
    {
        b[i]=a[i];
        am[i]=1;
        b[i]=b[i]*2;
    }
    reverse(b+1,b+1+n);
    for (int i=2;i<=n;i++)
    {
        if (b[i-1]<b[i])
        {
            int tmp=b[i]/b[i-1];
            auto it=s.upper_bound(II(tmp,100));
            it--;
            int res=(*it).se;
            am[i]+=max(am[i-1]-1-res,0ll);
        }
        else
        {
            int tmp=b[i-1]/b[i]+(b[i-1]%b[i]!=0);
            auto it=s.lower_bound(II(tmp,0));
            int res=(*it).se;
            am[i]+=res+am[i-1]-1;
        }
    }
    int cur=0;
    for (int i=1;i<=n;i++)
    {
        am[i]+=cur;
        if (am[i]%2==0) cur++,am[i]++;
    }
    reverse(am+1,am+1+n);
    //for (int i=1;i<=n;i++) cout<<am[i]<<endl;
    int sum=0,minn=inf;
    for (int i=1;i<=n;i++)
    {
        sum+=am[i];
        minn=min(minn,am[i]);
        am[i]=sum-minn*i+i;
    }
    //for (int i=1;i<=n;i++) cout<<am[i]<<" ";
  // cout<<endl;
}

void prepare2()
{
    for (int i=2;i<=n;i++)
    {
        if (a[i-1]<a[i])
        {
            int tmp=a[i]/a[i-1];
            auto it=s.upper_bound(II(tmp,100));
            it--;
            int res=(*it).se;
            duong[i]+=max(duong[i-1]-res,0ll);
        }
        else
        {
            int tmp=a[i-1]/a[i]+(a[i-1]%a[i]!=0);
            auto it=s.lower_bound(II(tmp,0));
            int res=(*it).se;
            duong[i]+=res+duong[i-1];
        }
    }
    int cur=0;
    for (int i=1;i<=n;i++)
    {
        duong[i]+=cur;
        if (duong[i]%2) cur++,duong[i]++;
        //cout<<duong[i]<<endl;
    }
    for (int i=1;i<=n;i++) v[i]=duong[i];
    v[n+1]=inf;
    int sum=0;
    for (int i=n;i>=1;i--)
    {
        //duong[i]=duong[i+1]+(max(v[i+1]-v[i],0ll));
        if (a[i]<=a[i+1]) duong[i]=duong[i+1];
        else duong[i]=sum-v[i]*(n-i);
        sum+=v[i];
        //cout<<sum<<endl;
    }
    //for (int i=1;i<=n;i++) cout<<v[i]<<" ";
    //cout<<endl;
    //for (int i=1;i<=n;i++) cout<<duong[i]<<" ";
    //cout<<endl;
}

void solve()
{
    int ans=inf;
    for (int i=1;i<=n+1;i++)
    {
        if (a[i]<a[i+1]) ans=min(ans,duong[i+1]+am[i-1]);
        else ans=min(ans,duong[i]+am[i-1]);
    }
    cout<<ans<<endl;
}

int32_t main()
{
    prepare0();
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    prepare1();
    prepare2();
    solve();
}

