#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,x,y,ans;
    cin>>a>>b>>x>>y;
    if (a<=b)
    {
        ans=(b-a)*y+x;
    }
    else
    {
        ans=(a-b-1)*y+x;
    }
    cout<<ans<<endl;
}
