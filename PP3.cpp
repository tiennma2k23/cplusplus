#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;

int sqr(int x)
{
    return (x*x)%mod;
}

int _pow(int x,int y)
{
    if(y==0) return 1;
    if (y%2) return (x*sqr(_pow(x,y/2)))%mod;
    return sqr(_pow(x,y/2));
}

int32_t main()
{
    int n;
    cin>>n;
    int ans=_pow(3ll,n-1);
    cout<<ans<<endl;
}
