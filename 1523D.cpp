#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+1;
int b[maxn];
using mod = modint<int(1e9+7)>;
map<int,mod> m;
void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>b[i];
    mod res=1;
    int x=0;
    for (int i=n;i>=1;i--)
    {
        x+=b[i];
        res=(2*res+m[x]);
        m[x]=(m[x]-(res-(res-m[x])/2));
    }
    cout<<res+m[x]<<endl;
    for (int i=n;i>=1;i--)
    {
        x+=b[i];
        m[x]=0;
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
