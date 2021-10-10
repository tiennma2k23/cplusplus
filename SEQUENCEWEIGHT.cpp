#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define se second
#define fi first
using namespace std;
const int maxn=1e6+1;
II a[maxn];
int t[maxn];
void solve()
{
    int n,ans=0,k;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[i].fi=x;
        a[i].se=i;
    }
    sort(a+1,a+1+n);
    int tmp=0;
    for (int i=2;i<=n;i++)
    {
        if (a[i].fi==a[i-1].fi)
        {
            tmp+=a[i-1].se;
            ans+=(tmp*(n-a[i].se+1));
            //cout<<a[i].se<<a[i-1].se<<endl;
        }
        else tmp=0;
        //cout<<ans<<endl;
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

