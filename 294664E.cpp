#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
vector<ll> v;
ll v1[maxn];
map<ll,ll> d,kt;
map<ll,vector<ll>>  gr;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    for (ll i=1;i<=m;i++)
    {
        ll x,y;
        cin>>x>>y;
        gr[x].push_back(y);
        gr[y].push_back(x);
        d[x]++;
        d[y]++;
        if (d[x]==1) v.push_back(x);
        if (d[y]==1) v.push_back(y);
    }
    sort(v.begin(),v.end());
    ll dem=1,d1=0;
    for (auto i:v)
    {
        bool ck=true;
        for (auto k:gr[i])
        {
            if (kt[k]==dem) {ck=false;break;}
        }
        if (ck==false)
        {
            dem++;
            d1=0;
        }
        if (kt[i]==0)
        {
            d1++;
            v1[d1]=i;
            kt[i]=dem;
        }
    }
    cout<<dem<<endl;
}
