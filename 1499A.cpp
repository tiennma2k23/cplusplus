#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,k1,k2;
        cin>>n>>k1>>k2;
        ll w,b;
        cin>>w>>b;
        ll t=min(k1,k2)+(max(k1,k2)-min(k1,k2))/2;
        k1=n-k1,k2=n-k2;
        ll t2=min(k1,k2)+(max(k1,k2)-min(k1,k2))/2;
        if (t>=w&&t2>=b) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
