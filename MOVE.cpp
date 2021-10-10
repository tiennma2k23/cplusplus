
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n,d;
    cin>>n>>d;
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    int t=(n+1)/2*d;
    if (t>=sum)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
