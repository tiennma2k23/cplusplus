#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll x1,y1,x2,y2,k1,k2,ans;
        cin>>x1>>y1>>x2>>y2;
        k1=abs(x1-x2);
        k2=abs(y1-y2);
        if (k1!=0&&k2!=0)  ans=k1+k2+2;
        else ans=k1+k2;
        cout<<ans<<endl;
    }
}
