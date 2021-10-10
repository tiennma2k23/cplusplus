#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
vector<int> v;
void solve()
{
    int n,k,x,kq=1;
    cin>>n>>k>>x;
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+1+n);
    for (int i=1; i<=n-1; i++)
    {
        if (a[i+1]-a[i]>x) kq++,v.push_back(a[i+1]-a[i]);
    }
    sort(v.begin(),v.end());
    for(auto val:v)
    {
        if ((val-1)/x<=k)
        {
            kq--;
            k-=(val-1)/x;
        }
    }
    cout<<kq<<endl;
}

int32_t main()
{
    solve();
}
