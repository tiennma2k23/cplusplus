#include<bits/stdc++.h>
using namespace std;
const long long MAXN=5*1e5+10;
unsigned long long vt[MAXN],ans,a,i,n,k,t[MAXN];
int main()
{
    cin>>n>>k;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        t[i]=t[i-1]+a;
        if (t[i]%k==0) ans=max(ans,t[i]);
        else if (vt[t[i]%k]!=0)
        {
            ans=max(ans,t[i]-t[vt[t[i]%k]]);
        }
        else vt[t[i]%k]=i;
        cout<<t[i]<<" "<<t[i]%k<<endl;
    }
    cout<<ans<<endl;
}
