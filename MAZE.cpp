#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll a[maxn];
int main()
{
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    ll sums=a[1];
    for (ll i=2;i<=n;i++)
    {
        ll tmp=sums/a[i]+(sums%a[i]>0);
        sums=tmp*a[i];
    }
    cout<<sums<<endl;
}
