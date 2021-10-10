#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long maxn=3e5+1;
map<long long,priority_queue < ll,vector<ll>,greater<ll> > > d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    priority_queue < ll,vector<ll>,greater<ll> > q;
    freopen("game.inp", "r", stdin);
    freopen("game.out", "w", stdout);
    long long n,i,a,tmp1,tmp2,tmp,t1,t2;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        q.push(a);
        d[a].push(0);
    }
    while (q.size()>1)
    {
        tmp1=q.top();
        q.pop();
        tmp2=q.top();
        q.pop();
        t1=d[tmp1].top();
        d[tmp1].pop();
        t2=d[tmp2].top();
        d[tmp2].pop();
        tmp=tmp1+tmp2;
        d[tmp].push(max(t1,t2)+1);
        q.push(tmp);
    }
    cout<<d[q.top()].top()<<endl;
}
