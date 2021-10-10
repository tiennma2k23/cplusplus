#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1000006,MAX=1000000000000000000;
long long t[MAXN],t1[MAXN];
int main()
{
    long long n,k,a,i,ans=-MAX;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    t[0]=0;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        t[i]=t[i-1]+a;
    }
    t1[n]=t[n];
    for (i=n-1;i>=1;i--)
    {
        t1[i]=t[i];
        t[i]=max(t[i],t[i+1]);
    }
    for (i=1;i<=n-k+1;i++)
    {
        ans=max(ans,t[i+k-1]-t1[i-1]);
    }
    cout<<ans<<endl;
}
