#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    cin>>q;
    while (q--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int ans=(x-1+y-1)*a;
        int tmp=max(x,y)-min(x,y);
        int ans1=(min(x,y)-1)*b+min((tmp/2)*2*b+(tmp%2)*a,tmp*a);
        ans=min(ans,ans1);
        cout<<abs(ans)<<'\n';
    }
}
