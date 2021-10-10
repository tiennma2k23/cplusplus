
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn];
void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    int pos=-1;
    for (int i=1;i<n;i++) if (pos==-1||a[i+1]-a[i]<a[pos+1]-a[pos]) pos=i;
    cout<<a[pos]<<" ";
    for (int i=pos+2;i<=n;i++) cout<<a[i]<<" ";
    for (int i=1;i<pos;i++) cout<<a[i]<<" ";
    cout<<a[pos+1]<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
