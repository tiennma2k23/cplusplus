
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll p[maxn];
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        cin>>n;
        for (ll i=n; i>=1; i--) p[n-i+1]=i;
        if (n%2==1) swap(p[n/2+1],p[n]);
        for (ll i=1; i<=n; i++) cout<<p[i]<<" ";
        cout<<endl;
    }
}
