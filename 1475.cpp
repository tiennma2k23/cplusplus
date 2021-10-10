#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll tmp=n/2020;
        ll tmp2=n%2020;
        if (tmp>=tmp2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
