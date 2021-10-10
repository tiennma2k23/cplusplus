#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define IIu pair<II,unsigned int>
using namespace std;
const int maxn=1e5+1;
set<IIu> st;
map<IIu,int> cnt;
II p[maxn];
#define fi first
#define se second
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>p[i].fi>>p[i].se;
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            int i1=p[i].fi+p[j].fi;
            int j1=p[i].se+p[j].se;
            unsigned int dd=(p[i].fi-p[j].fi)*(p[i].fi-p[j].fi)+(p[i].se-p[j].se)*(p[i].se-p[j].se);
            IIu tmp=IIu(II(i1,j1),dd);
            cnt[tmp]++;
            st.insert(tmp);
        }
    }
    int ans=0;
    for (auto val:st)
    {
        ans+=(cnt[val]*(cnt[val]-1))/2;
    }
    cout<<ans<<endl;
}
