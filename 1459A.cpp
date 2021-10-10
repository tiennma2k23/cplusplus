#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        cin>>n;
        char r[n+1],b[n+1];
        for (ll i=1;i<=n;i++) cin>>r[i];
        for (ll i=1;i<=n;i++) cin>>b[i];
        ll d=0;
        for (ll i=1;i<=n;i++)
        {
            d+=(r[i]>b[i]);
            d-=(r[i]<b[i]);
        }
        if (d<0) cout<<"BLUE"<<endl;
        else if (d==0) cout<<"EQUAL"<<endl;
        else cout<<"RED"<<endl;
    }
}
