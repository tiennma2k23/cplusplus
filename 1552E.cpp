
#include<bits/stdc++.h>
#define int long long
using namespace std;
#define II pair<int,int>
#define fi first
#define se second
const int maxn=101;
struct nodes
{
    int x;
    int y;
    int col;
    bool operator<(const nodes &op) const
    {
        return y>op.y;
    }
};

II ans[maxn];
int _prev[maxn];
bool vs[maxn];

int32_t main()
{

    int n,k;

    cin>>n>>k;
    priority_queue<nodes> p1;
    for (int i=1;i<=n*k;i++)
    {
        int c;
        cin>>c;
        if (_prev[c]!=0)
        {
            p1.push({_prev[c],i,c});
        }
        //cout<<c<<" "<<_prev[c]<<endl;
        _prev[c]=i;

    }
    priority_queue<nodes> p2;
    int _n=n;
    vector<II> ans(n + 1);
    while (_n)
    {
        int r=0;
        while (!p1.empty())
        {
            nodes cur=p1.top();
            p1.pop();
            if (vs[cur.col]) continue;

            if (cur.x>r)
            {
                ans[cur.col]=II(cur.x,cur.y);
                r=cur.y;
                vs[cur.col]=true;
                _n--;
            }
            else
            {
                p2.push(cur);
            }
        }
        swap(p1,p2);
    }

    for (int i=1;i<=n;i++) cout<<ans[i].fi<<" "<<ans[i].se<<endl;
}
