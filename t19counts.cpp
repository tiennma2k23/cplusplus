#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+2;
int fen[maxn],a[maxn];
int n,s;
vector<int> v;
void update(int u)
{
    int idx = u;
    while (idx >0) {
        fen[idx] += 1;
        idx -= (idx & (-idx));
    }
}

int get(int p)
{
    int idx = p, ans = 0;
    while (idx <=n+1) {
        ans += fen[idx];
        idx += (idx & (-idx));
    }
    return ans;
}
set<int> st;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=0;
    cin>>n>>s;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]-=s;
        t+=a[i];
        st.insert(t);
    }
    st.insert(0);
    for (auto val:st) v.push_back(val);
    t=0;int ans=0;
    for (int i=1;i<=n;i++)
    {
        t+=a[i];
        int pos=upper_bound(v.begin(),v.end(),t)-v.begin();
        ans+=get(pos);update(pos);
        if (t<=0) ans++;
    }
    cout<<ans<<endl;
}
/*-1
6
-9
0
-2
5
*/
