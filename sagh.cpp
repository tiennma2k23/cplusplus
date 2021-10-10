
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int ans=0;
    for (int i=1;i*i<=200000000;i++)
        for (int j=i+1;j*j<=200000000;j++)
    {
        int tmp=2*i*j-4;
        int tmp1=i+j;
        ans+=(tmp%tmp1==0);
    }
    cout<<ans<<endl;
}
