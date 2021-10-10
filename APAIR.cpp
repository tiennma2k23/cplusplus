#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    for (int i=1;i<=n;i++)  cin>>a[i];
    set<II> s;
    int ans=-1;
    for (int i=1;i<=n;i++)
    {
        auto it=s.lower_bound(II(a[i],0));
        int pos=i;
        if (it!=s.begin())
        {
            it--;
            pos=min(pos,(*it).se);
            ans=max(ans,i-pos);
        }
        s.insert(II(a[i],pos));
    }
    cout<<ans<<endl;
}
