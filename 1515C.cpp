#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1;
II a[maxn];
int b[maxn],ans[maxn];
void solve()
{
    int n,m,x;
    cin>>n>>m>>x;
    for (int i=1;i<=n;i++)
    {
        int h;
        cin>>h;
        a[i].fi=h,a[i].se=i;
    }
    sort(a+1,a+1+n);
    for (int i=1;i<=n;i++)
    {
       if (i % m == 0) b[m] += a[i].fi;
    else b[i % m] += a[i].fi;
    }
    sort(b+1,b+1+m);
    if (b[m]-b[1]>x)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for (int i=1;i<=n;i++)
    {
        b[i]=0;
        if (i%m==0) ans[a[i].se]=m;
        else ans[a[i].se]=i%m;
    }
    for (int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    return;
}
int32_t main(){
    int q;
    cin>>q;
    while (q--) solve();

}
