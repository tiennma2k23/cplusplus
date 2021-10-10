#include<bits/stdc++.h>
#define int long long
using namespace std;

bool ck(int x)
{
    int tmp=sqrt(x);
    return (tmp*tmp==x);
}

void solve()
{
    bool kt=true;
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if (!ck(a)) kt=false;
    }
    if (kt) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int32_t main()
{
    int nt;
    cin>>nt;
    while (nt--)
    {
        solve();
    }
}
