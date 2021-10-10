#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n,s;
        cin>>n>>s;
        if (n==1)
        {
            cout<<s<<endl;
        }
        else if (n==2)
        {
            cout<<s/2<<endl;

        }
        else
        {
            int tv=(n+1)/2;
            int ans=(s)/(n-tv+1);
            cout<<ans<<endl;
        }
    }
}
