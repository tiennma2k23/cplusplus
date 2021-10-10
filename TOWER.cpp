#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF=1e9+100;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        unsigned ll x,x1;
        cin>>x;
        bool kt=false;
        x1=x*2;
        ll tmp=sqrt(x1);
        for (ll j=tmp;j>=0;j--)
        {
            unsigned ll temp=j*(j+1)/2;
            if (temp==x)
            {
                kt=true;
                break;
            }
            else if (temp<x) break;
        }
        for (ll j=tmp;j<=INF;j++)
        {
            unsigned ll temp=j*(j+1)/2;
            if (temp==x)
            {
                kt=true;
                break;
            }
            else if (temp>x) break;
        }
        if (kt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
