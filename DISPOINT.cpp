#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int x[maxn],y[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        x[i]=a+b;
        y[i]=b-a;
    }
    sort(x+1,x+1+n);
    sort(y+1,y+1+n);
    for (int i=1;i<=n;i++){
    int  ans=max({abs(x[n]-x[i]),abs(y[n]-y[i]),abs(y[n-1]-y[i]),abs(x[n-1]-x[i]),abs(x[i]-x[1]),abs(x[i]-x[2]),abs(y[i]-y[1]),abs(y[i]-y[2])});
    cout<<ans<<'\n';
    }
}
