
#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int > v;
void solve()
{
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        v.clear();
        int b;
        for (int j=1;j<=m;j++) cin>>b,v.push_back(b);
        if (i==1) sort(v.begin(),v.end());
        else sort(v.rbegin(),v.rend());
        for (auto val:v) cout<<val<<" ";
        cout<<endl;
    }
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
