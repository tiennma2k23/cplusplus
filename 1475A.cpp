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
        cout<<n<<endl;
        while (n%2==0) n/=2;
        if (n!=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
