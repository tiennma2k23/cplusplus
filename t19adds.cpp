#include<bits/stdc++.h>
#define int long long
using namespace std;

int calc(int x,int m)
{
    int so1=x,so2=x+1,so3=2*x+1;
    if(so1%2==0) so1/=2;
    else so2/=2;
    if (so1%3==0) so1/=3;
    else if (so2%3==0) so2/=3;
    else so3/=3;
    int ans=(so1*so2)%m;
    ans=(ans*so3)%m;
    return ans;
}
int32_t main()
{
    int a,b,m;
    cin>>a>>b>>m;
    int ans=(calc(b,m)-calc(a-1,m)+m)%m;
    cout<<ans<<endl;
}
