#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn=1e5+1;
ll n,a[maxn],F[maxn],b[maxn];

ll lis()
{
    ll m=0;
    for (ll i=1; i<=n; i++)
    {
        F[i] = lower_bound(b + 1, b + m + 1, a[i]) - b;
        m = max(m, F[i]);
        b[F[i]] = a[i];
    }
    return m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>n;
    for (ll i=1; i<=n; i++) cin>>a[i];
    cout<<lis()<<endl;
}
