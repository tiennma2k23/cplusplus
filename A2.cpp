
#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans[2];
int32_t main()
{
    freopen("A2.inp","r",stdin);
    freopen("A2.out","w",stdout);
    int x,cnt=0;
    while (cin>>x)
    {
        cnt++;
        ans[cnt%2]+=x;
    }
    cout<<ans[1]<<" "<<ans[0]<<endl;
}
