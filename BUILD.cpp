
#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll, ll> ii;
#define X first
#define Y second
const ll maxn=2e5+1;
ii v[maxn];
vector<ii> a[maxn];
ll d[maxn];
ll n;
void prepare()
{
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++)
    {
        ll w=min(abs(v[i].X-v[j].X),abs(v[i].Y-v[j].Y));
        a[i].push_back(ii(w, j));
        if (i!=j) a[j].push_back(ii(w, i));
    }
}

bool minimize(ll &a, ll b) {
    if (a > b)
        a = b;
    else
        return false;
    return true;
}

ll prim(int start) {
    ll Answer = 0;
    priority_queue<ii> qu;
    for (ll i = 1; i <= n; ++i) d[i] = 0x33334444;
    qu.push(ii(0, start)), d[start] = 0;

    while (qu.size()) {
        ii top = qu.top();
        qu.pop();
        ll u = top.Y;
        if (d[u] != -top.X) continue;
        Answer += d[u], d[u] = 0;

        for (int i = 0; i < a[u].size(); i++) {
            ll v = a[u][i].Y;
            if (minimize(d[v], a[u][i].X))
                qu.push(ii(-d[v], v));
        }
    }
    return Answer;
}
const ll lim=5e3;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>v[i].X>>v[i].Y;
    if (n<=lim){
    prepare();
    cout<<prim(1)<<endl;
    }
    else cout<<0<<endl;
}
