#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long
using namespace std;

uint calc(uint x)
{
    uint tmp1=x;
    uint tmp2=x+1,tmp3=2*x+1;
    if (tmp1%2==0) tmp1/=2;
    else tmp2/=2;
    if (tmp1%3==0) tmp1/=3;
    else if (tmp2%3==0) tmp2/=3;
    else tmp3/=3;
    uint res=tmp1*tmp2*tmp3;
    return res;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        uint n;
        cin>>n;
        uint tmp=n/2;
        uint tmp1=calc(tmp);
        tmp1*=4;
        //cout<<tmp1<<endl;
        uint tmp2=calc(n);
        tmp2-=tmp1;
        int ans=1ll*(tmp1-tmp2);
        cout<<ans<<endl;
    }
}
