#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll x,n,d;
        cin>>n>>x;
        if (n==1||n==2) cout<<1<<endl;
        else
        {
            d=2;
            ll x1=x+2;
            while (n>x1) x1+=x,d++;
            cout<<d<<endl;
        }
    }
}
