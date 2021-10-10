#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int r,b,d;
    cin>>r>>b>>d;
    if (r>b) swap(r,b);
    if (r*(d+1)>=b)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
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
