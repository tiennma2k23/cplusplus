#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n,t=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        t+=a;
    }
    if (t==n)
    {
        cout<<0<<endl;
        return;
    }
    if (t<n)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<(t-n)<<endl;
    }
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
