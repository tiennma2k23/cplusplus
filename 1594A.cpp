#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        int ans1=-(n-1);
        int ans2=n;
        if (ans1>ans2) swap(ans1,ans2);
        cout<<ans1<<" "<<ans2<<endl;
    }
}
