
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if (n%2==1)
    {
        cout<<2<<endl;
        return;
    }
    if (n%4==0)
    {
        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
}

int32_t main()
{
    int q;
    q=1;
    while (q--)
    {
        solve();
    }
}

