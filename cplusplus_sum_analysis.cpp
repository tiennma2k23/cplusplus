#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e6;
int32_t main()
{
    int n,ans=0;
    cin>>n;
    /*for (int i=0;i<=n/3;i++)
    {
        if (i%2==n%2)
        {
            ans+=((n-3*i+2)/2);
            ans%=mod;
        }
        else
        {
            ans+=(n-3*i+1)/2;
            ans%=mod;
        }
    }*/
    //cout<<ans<<endl;
    int tmp((1+n/3)*(n/3)/2);
    tmp=(tmp*3);
    //cout<<tmp<<endl;
    //ans=((n*(n/3+1)-tmp)/2)%mod;
    //cout<<ans<<endl;
    if (n%2==0)
    {
        int sl=n/3;
        // chan +1, le -1
        int slc=(sl-0)/2+1;
        //tmp+=slc*2+sl-slc;
        ans=((n*(n/3+1)-tmp+slc*2+sl-slc)/2)%mod;
    }

    else
    {
        int sl=n/3;
        // chan -1, le +1
        int slc=(sl-0)/2+1;
        //tmp+=slc+2*(sl-slc);
        //cout<<tmp<<endl;
        ans=((n*(n/3+1)-tmp+slc+2*(sl-slc))/2)%mod;
    }
    cout<<(ans+1)%mod<<endl;
}
