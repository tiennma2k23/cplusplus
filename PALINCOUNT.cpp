#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long
using namespace std;

uint calc(uint x, uint y)
{
    uint res=0;
    if (x>=3)
        res+=x*(x-2)*(x-1);
    if (y>=3) res+=y*(y-2)*(y-1);
    if (x>=2)
    {
        res+=(x)*(x-1)*y;
    }
    if (y>=2) res+=x*(y)*(y-1);
    return res;
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--){
    uint x,y;
    cin>>x>>y;
    uint ans=calc(x,y);
    cout<<ans<<endl;
    }
}
