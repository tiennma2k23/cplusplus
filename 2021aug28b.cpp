#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5e5+5,inf=1e9+1;
set<int> st;
int a[maxn],cnt[maxn];
int solve(int l, int r)
{
    auto it=st.lower_bound(r);
    auto it1=st.upper_bound(l);
    if (it==st.begin())
    {
        return ((r-l+2)*(r-l+1)/2);
    }
    int pos1=(*it)-1;
    int ans=(pos
    it--;
    it1--;
    ans=cnt[*it1]-cnt[*it];
    int pos=(*it)+1;
    ans+=(r-pos+2)*(r-pos+1)/2;
    return ans;
}

int32_t main()
{
    int n,q;
    cin>>n>>q;
    for (int i=1;i<=n;i++) cin>>a[i];
    a[n+1]=inf;
    int d=0;
    st.insert(n);
    for (int i=n;i>=1;i--)
    {
        if (a[i]<a[i+1]) d++;
        else
        {
            auto it=st.begin();
            cnt[*it]=d*(d+1)/2;
            //cerr<<*it<<" "<<d<<cnt[*it]<<" "<<endl;
            d=1;
            st.insert (i);
        }
    }
    auto it=st.begin();
    cnt[*it]=d*(d+1)/2;
    //for (auto val:st) cout<<val<<endl;
    //for (int i=1;i<=n;i++) cout<<cnt[i]<<endl;
    for (int i=1;i<=n;i++) cnt[i]+=cnt[i-1];
    for (int i=1;i<=n;i++) cout<<cnt[i]<<endl;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        int mid=(l+r)/2;
        int ans=min(ans,max(solve(l,mid),solve(mid,r)));
        mid--;
        ans=min(ans,max(solve(l,mid),solve(mid,r)));
        mid+=2;
        ans=min(ans,max(solve(l,mid),solve(mid,r)));
        cout<<ans<<endl;
    }
}
