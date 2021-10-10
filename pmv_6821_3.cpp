#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define PP pair<II,II>
#define fi first
#define se second
using namespace std;
set<PP> st;
set<int> s;
vector<int> ans,res;
const int inf=1e9+1;
int32_t main()
{
    int anst,ansh;
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        st.insert(PP(II(a,b),II(c,i)));
        s.insert(i);
    }
    //sort(v.begin(),v.end());
    anst=inf,ansh=-1;
    while (!s.empty())
    {
        int kt=0;
        int hi=0;int time=0;
        res.clear();
        while (true)
        {
            auto it=st.lower_bound(PP(II(kt,0),II(0,0)));
            if (it!=st.end())
            {
                hi=hi+(*it).se.fi;
                time=time+(*it).fi.se-(*it).fi.fi;
                res.push_back((*it).se.se);
                kt=(*it).fi.se;
                s.erase(s.find((*it).se.se));
                st.erase(it);
            }
            else
            {
                if (ansh<hi)
                {
                    ansh=hi;anst=time;
                    ans.clear();
                    for (auto val:res) ans.push_back(val);
                }
                else if (ansh==hi&&anst>time)
                {
                    anst=time;
                    ans.clear();
                    for (auto val:res) ans.push_back(val);
                }
                cout<<ans.size()<<" "<<ansh<<" "<<anst<<endl;
                break;
            }

        }//cout<<s.size()<<endl;
    }
    cout<<ans.size()<<" "<<ansh<<" "<<anst<<endl;
}
