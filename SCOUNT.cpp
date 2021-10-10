#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll M=1e9+7;
int main()
{
    ll n, ans=1;
    cin>>n;
    string s;
    ll m;
    cin>>s;
    cin>>m;
    for (ll i=1;i<=n;i++)
    {
        ans=(ans*26)%M;
    }
    cout<<(ans*m)%M<<endl;
}
