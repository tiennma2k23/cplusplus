#include<bits/stdc++.h>
using namespace std;
const long long maxx=1e9,maxn=1e6,INF=1e18;
long long i,n,a[maxn],k;
bool checkn(long long t)
{
    long long Wd=0,i=1;
    for (i=1;i<=n;i++)
    {
        if (i==n)
        {
            return Wd+t*k>=a[n];
        }
        Wd=max(Wd+t*k-a[i],0ll);
        Wd=min(Wd,INF);
    }
}
bool checkall(long long t)
{
    long long rW=0,i=1;
    for (i=1;i<=n;i++)
    {
        if(1ll*rW+t*k<a[i]) return false;
        rW=max(rW+t*k-a[i],0ll);
        rW=min(rW,INF);
    }
    return true;
}

long long yc1()
{
    long long l=1,r=maxx,mid=0,ans=0;
    while (l<=r)
    {
        mid=(l+r)/2;
        if(checkn(mid)) {ans=mid;r=mid-1;}
        else l=mid+1;
    }
    return ans;
}
long long yc2()
{
    long long l=1,r=maxx,mid=0,ans=0;
    while (l<=r)
    {
        mid=(l+r)/2;
        if(checkall(mid)) {ans=mid;r=mid-1;}
        else l=mid+1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("abc.inp","r",stdin);
    cin>>n>>k;
    for (i=1;i<=n;i++) cin>>a[i];
    cout<<yc1()<<" "<<yc2();
}
