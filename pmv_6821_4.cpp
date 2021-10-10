#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;

const int maxn=210,maxm=30000;

set<int> st[maxn],s;
vector<II> v[maxm];
int32_t main()
{
    //freopen("abc.out","w",stdout);
    int n,k,dem=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
        for (int j=i+1;j<=n;j++) st[i].insert(j);
    while (true)
    {
        for (int i=1;i<=n;i++) s.insert(i);
        int demr=0;
        while (!s.empty())
        {
            auto it=s.begin();
            int tmp=*it;
            s.erase(it);
            if (st[tmp].empty())
            {
                demr++;
            }
            else
            {
                for (int i=tmp+1;i<=n;i++)
                {
                    if (s.count(i)&&st[tmp].count(i))
                    {
                        v[dem].push_back(II(tmp,i));
                        st[tmp].erase(st[tmp].find(i));
                        s.erase(s.find(i));
                        break;
                    }
                }
            }
            if (v[dem].size()==k) break;
        }
        dem++;
        if (demr==n) break;
    }
    cout<<dem-1<<endl;
    int maxx=0;
    for (int i=0;i<dem-1;i++)
   {
        cout<<v[i].size()<<endl;
        for (auto val:v[i]) cout<<val.fi<<" "<<val.se<<endl;
        //int _t=v[i].size();
        //maxx=maxx+_t;
    }
   //cout<<maxx<<endl;
}
