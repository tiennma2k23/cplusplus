#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
struct Data
{
    ll x,y,vt;
};
vector<Data> p,p2;
ll ck[maxn];
bool cmp1(Data a, Data b)
{
    return a.x<b.x;
}
bool cmp2(Data a, Data b)
{
    return a.y<b.y;
}
int main()
{
    ll n;
    cin>>n;
    p.push_back({-1,-1,-1});
    for (ll i=1;i<=n;i++)
    {
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        p.push_back({x1,y1,i});
        p2.push_back({x2,y2,i});
    }
    sort(p.begin()+1,p.end(),cmp1);
    ll d=0;
    for (ll j=1;j<p.size();j++)
    {
        if (p[j].x!=p[j-1].x) d=1;
        else d++;
        if (d>1)
        {
            ck[p[j].vt]=1;
            ck[p[j-1].vt]=1;
        }
    }


    sort(p.begin()+1,p.end(),cmp2);
    d=0;
    for (ll j=1;j<p.size();j++)
    {
        if (p[j].y!=p[j-1].y) d=1;
        else d++;
        if (d>1)
        {
            ck[p[j].vt]=1;
            ck[p[j-1].vt]=1;
        }
    }


    sort(p2.begin()+1,p2.end(),cmp2);
    d=0;
    for (ll j=1;j<p2.size();j++)
    {
        if (p2[j].y!=p2[j-1].y) d=1;
        else d++;
        if (d>1)
        {
            ck[p2[j].vt]=1;
            ck[p2[j-1].vt]=1;
        }
    }


    sort(p2.begin()+1,p2.end(),cmp1);
    d=0;
    for (ll j=1;j<p2.size();j++)
    {
        if (p2[j].x!=p2[j-1].x) d=1;
        else d++;
        if (d>1)
        {
            ck[p2[j].vt]=1;
            ck[p2[j-1].vt]=1;
        }
    }


    ll dem=0;
    for (ll i=1;i<=n;i++) if (ck[i]==0) dem++;
    cout<<dem<<endl;
}
