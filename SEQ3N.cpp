#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=LLONG_MAX,maxn=3e5+1;
multiset<int> st;
int a[maxn],t[maxn];
int32_t main()
{
    int n,ans=-inf;
    cin>>n;
    for (int i=1;i<=3*n;i++) cin>>a[i];
    for (int i=1;i<=2*n;i++)
    {
        t[i]=t[i-1]+a[i];
        st.insert(a[i]);
        if (st.size()>n)
        {
            t[i]-=*st.begin();
            st.erase(st.begin());
        }
    }
    st.clear();
    int t1=0;
    for (int i=3*n;i>=n+1;i--)
    {
        t1+=a[i];
        st.insert(a[i]);
        if (st.size()>n)
        {
            auto it=st.end();
            it--;
            t1-=*it;
            st.erase(it);
        }
        if (i<=2*n+1&&i>n)
        {
            ans=max(ans,t[i-1]-t1);
        }
    }
    cout<<ans<<endl;
}

