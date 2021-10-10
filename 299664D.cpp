#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll b[maxn],a[maxn];
int main()
{
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    deque<ll> mx;
    for (ll i=1;i<=n;i++)
    {
        while (!mx.empty()&&a[mx.back()]<a[i])
        {
            if (b[mx.back()]==0) b[mx.back()]=i;
            mx.pop_back();
        }
        mx.push_back(i);
    }
    for (ll i=1;i<=n;i++) cout<<b[i]<<" ";
}
