#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e7,maxn=1e5;
vector<ll> mP(N),d(N),b(maxn);
vector<ll> q;
void sang()
{
for (ll i = 2; i * i <= N; ++i) {
    if (mP[i] == 0) {
        for (ll j = i * i; j <= N; j += i) {
            if (mP[j] == 0) {
                mP[j] = i;
            }
        }
    }
}
for (ll i = 2; i <= N; ++i) {
    if (mP[i] == 0) {
        mP[i] = i;
    }
}
}

ll sl(ll x)
{
    ll dem=0,res=1;
    while (x>1)
    {
        if (d[mP[x]]==0) dem++,b[dem]=mP[x];
        d[mP[x]]++;
        x/=mP[x];
    }
    for (ll i=1;i<=dem;i++)
    {
        res*=(d[b[i]]+1);
        d[b[i]]=0;
    }
    return res;
}
void sinhso()
{
    q.push_back(1);
    ll max1=1;
    for (ll i=2;i<=N;++i)
    {
        ll k=sl(i);
        if (k>=max1)
        {
            q.push_back(i);
            max1=k;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("ABC.inp","r",stdin);
    sang();
    sinhso();
    ll n;
    cin>>n;
    while (n--)
    {
        ll x;
        cin>>x;
        ll vt=lower_bound(q.begin(),q.end(),x)-q.begin();
        cout<<q[vt]<<endl;
    }
}
