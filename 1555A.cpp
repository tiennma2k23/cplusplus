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
        if (n<=6) cout<<15<<endl;
        else {
        int ans=(n/6)*15;
        int tmp=n%6;
        ans+=(tmp/2+(tmp%2))*5;
        cout<<ans<<endl;
    }}
}
