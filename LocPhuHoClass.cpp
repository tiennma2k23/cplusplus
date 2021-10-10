#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1,maxm=1e5+1;
set<II> in[maxn],out[maxn];
vector<int> chat[maxm],send[maxn];
int32_t main()
{
    int n,m,q;
    cin>>n>>m>>q;
    for (int i=1;i<=q;i++)
    {
        int type,x,y;
        cin>>type;
        if (type==1)
        {
            cin>>x>>y;
            in[x].insert(II(y,i));
        }
        else if (type==2)
        {
            cin>>x>>y;
            out[x].insert(II(y,i));
            //auto it=in[x].lower_bound(II(y,0ll));
        }
        else
        {
            cin>>x>>y;
            send[x].push_back(y);
            chat[y].push_back(i);
        }
    }
    for (int i=1;i<=m;i++)
    {
        int ans=0;
        for (auto val:in[i])
        {
            int l=val.se;
            auto it1=lower_bound(chat[val.fi].begin(),chat[val.fi].end(),l);
            ans+=chat[val.fi].end()-it1;
            //if (i==2) cout<<l<<" "<<ans<<endl;
            auto it=out[i].lower_bound(II(val.fi,val.se));
            if (it==out[i].end()) continue;
            if ((*it).fi!=val.fi) continue;

            it1=upper_bound(chat[val.fi].begin(),chat[val.fi].end(),(*it).se);
            //it1--;
            ans-=chat[val.fi].end()-it1;
        }
        ans-=send[i].size();
        cout<<ans<<endl;
    }
}
