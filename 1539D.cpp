#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1e5+5;
II a[maxn];

bool cmp(II a,II b)
{
    return (a.se<b.se||(a.se==b.se)&&(a.fi<b.fi));
}

void solve()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i].fi>>a[i].se;
    sort(a+1,a+1+n,cmp);
    int j=n;
    int curr=0,kq=0;
    for (int i=1; i<=n; i++)
    {
        while (i<=j&&a[i].se>curr)
        {
            int _min=min(a[i].se-curr,a[j].fi);
            curr+=_min;
            a[j].fi-=_min;
            kq+=2*_min;
            if (a[j].fi==0) j--;
        }
        kq+=a[i].fi;
        curr+=a[i].fi;
    }
    cout<<kq<<endl;
}

int32_t main()
{
    solve();
}
