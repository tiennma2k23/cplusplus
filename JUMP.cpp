#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll b[maxn],a[maxn],ans[maxn];
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,q;
    cin>>n>>q;
    for (ll i=1; i<=n; i++) cin>>a[i];
    deque<ll> mx;
    for (ll i=1; i<=n; i++)
    {
        while (!mx.empty()&&a[mx.back()]<a[i])
        {
            if (b[mx.back()]==0) b[mx.back()]=i;
            mx.pop_back();
        }
        mx.push_back(i);
    }
    for (ll i=n-1;i>=1;i--)
    {
        if (b[i]!=0) ans[i]=ans[b[i]]+1;
    }
    while (q--)
    {
        ll k;
        cin>>k;
        cout<<ans[k]<<endl;
    }
}

