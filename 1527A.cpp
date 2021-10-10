#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int t=1;
    while (t*2<=n) t=t*2;
    cout<<t-1<<endl;

}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
