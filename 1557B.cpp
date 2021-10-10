#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn],b[maxn];
void solve()
{
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i],b[i]=a[i];
    int ans=1;
    sort(b+1,b+1+n);
    for(int i=1; i<=n; i ++)
    {
        a[i]=lower_bound(b+1,b+1+n,a[i])-b;
        if(i>=2&&a[i]!=a[i-1]+1) ans++;
    }
    if(ans<=k) cout << "yes" << endl;
    else cout << "no" << endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while(q--) solve();
}
