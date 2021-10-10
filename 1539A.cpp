#include<bits/stdc++.h>
#define int long long
using namespace std;
int add(int x)
{
    int ans;
    if(x%2==0) ans= x/2*(x + 1);
    else ans=(x+1)/2*x;
    return ans;
}
void solve()
{
    int n,x,t;
    cin>>n>>x>>t;
    int tmp=t/x;
    int res=0;
    if(n>=tmp+1) res=tmp*(n-tmp-1)+add(tmp);
    else res=add(n-1);
    cout<<res<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
