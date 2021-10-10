#include<bits/stdc++.h>
using namespace std;
const long long maxn=5e5+2;
long long a[maxn],t[maxn];
int main()
{
    long long n,q,val,k,tmp,ans,i,vt;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    t[0]=0;
    for (i=1;i<=n;i++) t[i]=t[i-1]+a[i];
    cin>>q;
    val=0;
    while (q--)
    {
        cin>>k;
        val+=k;
        tmp=-val;
        vt=lower_bound(a+1,a+1+n,tmp)-a-1;
        cout<<vt<<endl;
        ans=abs(t[vt]+vt*val)+(t[n]-t[vt]+(n-vt)*val);
        //cout<<ans<<endl;
    }
}
