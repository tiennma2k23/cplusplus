#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll M=1e9+7;
ll pow2(ll p)
{
    ll tich=2,du=1,p1=p;
    while (p>0)
    {
        if (p%2==1) du=du*tich%M;
        tich=tich*tich%M;
        p/=2;
    }
    return du;
}
ll solve(ll n)
{
    return pow2(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    ll n;
    cin>>n;
    cout<<solve(n)<<'\n';
}
