#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+1;
vector<int> v,v1;
vector<int> gr[maxn];
bool ok[maxn];
set<int> st[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    int cnt1=0,cnt=0;
    int sl=0;
    for (int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        if (k==0) v.push_back(i),   ok[i]=true,sl++;
        for (int j=1;j<=k;j++)
        {
            int x;
            cin>>x;
            gr[x].push_back(i);
            st[i].insert(x);
        }
    }
    int ans=0;
    while (true)
    {
            for (auto val:v)
            {
                for (auto _val:gr[val])
                {
                    if (st[_val].count(val)) st[_val].erase(val);
                    if (st[_val].empty()&&!ok[_val])
                    {
                        if (_val<=val) v1.push_back(_val);
                        else v.push_back(_val);
                        ok[_val]=true;
                        for (auto val:v) cout<<val<<" ";cout<<endl;                    }
                }
                //cout<<val<<endl;
            }
        if (v1.empty()) break;
        ans++;
        v.clear();
        v=v1;
        v1.clear();
    }
    for (int i=1;i<=n;i++) if (st[i].size())
    {
        cout<<i<<endl;
        for (auto val:st[i]) cout<<val<<" ";
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<endl;
}
