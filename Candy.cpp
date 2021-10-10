#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=400;
int sl[1],x[maxn],pos,n,m;
int calc(int x1,int x2)
{
    int res1=0,tmp1=0,vt=pos;
    for (int i=pos;i>=x1;i--)
    {
        tmp1+=abs(x[i]-x[vt]);
        if (i==pos) res1+=max(0ll,sl[0]-tmp1);
        else res1+=max(0ll,m-tmp1);
        vt=i;//cout<<res1<<" "<<i<<endl;
    }
    //
    //cout<<res1<<endl;
    for (int i=pos+1;i<=x2;i++)
    {
        tmp1+=abs(x[i]-x[vt]);
        res1+=max(0ll,m-tmp1);
        vt=i;
        //cout<<res1<<" "<<i<<endl;
    }
    //cout<<res1<<endl;
    int tmp2=0,res2=0;
    vt=pos;
    for (int i=pos;i<=x2;i++)
    {
        tmp2+=abs(x[i]-x[vt]);
        if (i==pos) res2+=max(0ll,sl[0]-tmp2);
        else res2+=max(0ll,m-tmp2);
        vt=i;
    }
    //cout<<res2<<endl;
    for (int i=pos-1;i>=x1;i--)
    {
        tmp2+=abs(x[i]-x[vt]);
        res2+=max(0ll,m-tmp2);
        vt=i;
    }
    //cout<<res1<<" "<<res2<<endl;
    return max(res1,res2);
}

int32_t main()
{
    cin>>n>>m;
    bool ok=false;
    for (int i=1;i<=n;i++)
    {
        cin>>x[i];
        if (x[i]==0) ok=true,sl[0]=m;
    }
    if (!ok)
    {
        n++;
        x[n]=0;
        sl[0]=0;
    }
    int ans=0;
    sort(x+1,x+1+n);
    //for (int i=1;i<=n;i++) if (x[i]>=0) cout<<calc(0,i)<<" "<<x[i]<<endl;
    pos=lower_bound(x+1,x+1+n,0ll)-x;
    for (int i=pos;i>=1;i--)
    {
        for (int j=pos;j<=n;j++)
        {
            ans=max({ans,calc(i,pos),calc(i,j),calc(pos,j)});
            //cout<<i<<" "<<j<<endl;
        }
    }
    cout<<ans<<endl;
}
