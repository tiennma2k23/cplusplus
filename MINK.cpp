#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll n,a[maxn],k;
deque<ll> q;
void solve()
{
    ll res;
    q.clear();
    for (ll i=1;i<=n;i++)
    {
        while (!q.empty()&&q.front()<i-k+1) q.pop_front();
        while (!q.empty()&&a[q.back()]>a[i]) q.pop_back();
        if (!q.empty()) res=a[q.front()];
        else res=a[i];
        q.push_back(i);
        if (i>=k) cout<<res<<" ";
    }
}

void Read()
{
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        Read();
        solve();
        cout<<endl;
    }
}
