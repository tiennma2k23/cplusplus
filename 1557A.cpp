#include<bits/stdc++.h>
#define int long long
#define ld long double
#define d double
using namespace std;
const int inf=1e18;
void solve()
{
    int n;
    int sum=0;
    cin>>n;
    int s=0,maxx=-inf;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        s+=x;
        maxx=max(maxx,x);
    }
    cout<<setprecision(10)<<fixed<<(double)maxx + (double)(s-maxx)/(n-1)<<endl;
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--) solve();
}
