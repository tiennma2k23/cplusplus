#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        cout<<min((a-p%a)%a, min((b-p%b)%b,(c-p%c)%c))<<endl;
    }
}
