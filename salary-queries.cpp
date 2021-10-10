#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=4e5+1;
int fen[maxn+4];
vector<int> v(maxn+4),a(maxn+4);

struct nodes
{
    int tv,a,b;
};
vector<nodes> res;
void update (int x,int val)
{
    while (x<=maxn)
    {
        fen[x]+=val;
        x+=x & (-x);
    }
}

int get(int x)
{
    int ans=0;
    while (x>0)
    {
        ans+=fen[x];
        x-= x & (-x);
    }
    return ans;
}

void upd(int x,int val)
{
    int id = upper_bound(v.begin(), v.end(), x) - v.begin();
	update(id, val);
}

int query (int x)
{
    int id = upper_bound(v.begin(), v.end(), x) - v.begin();
	return get(id);
}

int32_t main()
{
    int n,q;
    cin>>n>>q;
    for (int i=0;i<n;i++) cin>>a[i],v.push_back(a[i]);
    while (q--)
    {
        char t;
        int a,b;
        cin>>t>>a>>b;
        if (t=='!')
        {
            v.push_back(b);
        }
        res.push_back({(t=='?'),a-1,b});
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i=0;i<n;i++) upd(a[i],1ll);
    for (auto val:res)
    {
        if (val.tv==0)
        {
            upd(a[val.a],-1);
            a[val.a]=val.b;
            upd(a[val.a],1);
        }
        else cout<<query(val.b)-query(val.a)<<endl;
    }
}
