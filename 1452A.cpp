#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<(x+y)+max(abs(x-y)-1,0ll)<<endl;
    }
}
