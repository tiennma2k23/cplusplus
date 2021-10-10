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
        int ans=100ll/__gcd(n,100ll);
        cout<<ans<<endl;
    }
}
