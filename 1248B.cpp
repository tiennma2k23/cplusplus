#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=3e5+1;
ll n;
bool vs[maxn];
vector<ll> gr[maxn];
void DFS(ll u)
{
    vs[u]=true;
    for (auto v:gr[u])
    {
        if (!vs[v]) DFS(v);
    }
}

ll solve()
{
    ll res=0;
    for (ll i=1;i<=n;i++)
    {
        if (!vs[i])
        {
            res++;
            DFS(i);
        }
    }
    return res;
}
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        cin>>n;
        vs[0]=false;
        for (ll i=1;i<=n;i++)
        {
            vs[i]=false;
            char ch;
            cin>>ch;
            if (ch=='>') gr[i].push_back(i+1<=n?i+1:1);
            else if (ch=='<') gr[i+1<=n?i+1:1].push_back(i);
            else
            {
                gr[i].push_back(i+1<=n?i+1:1);
                gr[i+1<=n?i+1:1].push_back(i);
            }
        }
        cout<<solve()<<endl;
    }
}
