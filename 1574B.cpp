#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int a[4],m;
        cin>>a[1]>>a[2]>>a[3]>>m;
        sort(a+1,a+1+3);
        if (a[3]-a[2]-a[1]-1<=m&&m<=a[1]+a[2]+a[3]-3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
