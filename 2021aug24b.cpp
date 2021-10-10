#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1;
II a[maxn];
multiset<int> st;
int32_t main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i].fi>>a[i].se;
    sort(a+1,a+1+n);
    st.insert(a[1].se);
    for(int i=2; i<=n; i++)
    {
        if(a[i].se<=*(st.begin())) st.insert(a[i].se);
        else
        {
            auto it=st.lower_bound(a[i].se);
            st.erase(--it);
            st.insert(a[i].se);
        }
    }
    cout<<st.size()<<endl;
}
