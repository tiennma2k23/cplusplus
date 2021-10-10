#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int a,b;
        cin>>a>>b;
        if (b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
    }
}
