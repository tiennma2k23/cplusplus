#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=2e9;

bool ok(int x,int y,int a,int b,int key)
{
    if (a>b) swap(a,b);
    x-=a*key;
    y-=a*key;
    b-=a;
    if (x>=0&&y>=0&&((b>0&&x/b+y/b>=key)||(b==0))) return true;
    else return false;
}

void solve()
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int l=0,r=inf,ans=inf;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (ok(x,y,a,b,mid)) l=mid+1,ans=mid;
        else r=mid-1;
    }
    cout<<ans<<endl;
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
