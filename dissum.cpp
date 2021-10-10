#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=25,maxn=1e5+1;
set<int> st,vt[maxn+4],st1;
int a[maxn];
vector<int> v;
int32_t main()
{
    int n,q,gt,ans=0;
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>a[i];
    cin>>q;
    while (q--)
    {
        ans=0;
        int p,x;
        cin>>p>>x;
        a[p]=x;
        st.clear();
        for (int i=1; i<=n; i++) vt[a[i]].clear();
        for (int i=1; i<=n; i++)
        {
            vt[a[i]].insert(i);
            st.insert(a[i]);
        }
        st.insert(maxn);
        vt[maxn].insert(n+1);
        for (int i=1; i<=n; i++)
        {
            st1.clear();
            for (auto val:st) st1.insert(val);
            int pos=i,cnt=0;
            st1.erase(st1.find(a[i]));
            while (!st1.empty())
            {
                v.clear();
                cnt++;
                int pos1=n+2;
                for (auto val:st1)
                {
                    auto it=vt[val].upper_bound(pos);
                    if (it==vt[val].end())
                    {
                        v.push_back(val);
                    }
                    else
                    {
                        if (pos1>*it)
                        {
                            pos1=*it;
                            gt=val;
                        }
                    }
                }
                v.push_back(gt);
                for (auto val:v) st1.erase(st1.find(val));
                ans+=cnt*(pos1-pos);
                pos=pos1;
            }
        }
        cout<<ans<<endl;
    }
}
