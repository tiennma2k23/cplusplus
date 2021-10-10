#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+5,inf=LLONG_MAX;
int a[maxn],b[maxn],c[maxn];
void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i) cin>>a[i];
    for (int i=0; i<=n+1; i++) b[i]=c[i]=0;
    for(int i=1; i<=n; ++i)
    {
        if(a[i]>=b[i-1]) b[i]=a[i]-b[i-1];
        else b[i]=inf;
    }
    for(int i=n; i>=1; --i)
    {
        if(a[i]>=c[i+1]) c[i]=a[i]-c[i+1];
        else c[i]=inf;
    }

    bool kt=false;
    if(b[n]==0 || c[1]==0)
    {
        kt=true;
    }

    for(int i=1; i<n; ++i)
    {
        if(a[i+1]>=b[i-1] && a[i]>=c[i+2] && a[i+1]-b[i-1]==a[i]-c[i+2])
        {
            kt=true;
            break;
        }
    }
    if(kt) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while(q--) solve();
}
