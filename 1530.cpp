
#include<bits/stdc++.h>
#define int long long
using namespace std;
set<int> st;
const int inf=1e9;
void solve()
{
    int n,ans=0;
   cin>>n;
   while (n>0)
   {
       ans=max(ans,n%10);
       n/=10;
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

