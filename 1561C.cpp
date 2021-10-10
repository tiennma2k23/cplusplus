
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1;
vector<II> v;
int sl[maxn];
void solve()
{
    int n;
    cin>>n;
    v.clear();
    for (int i=1;i<=n;i++)
    {
        cin>>sl[i];
        int a=0;
        for (int j=1;j<=sl[i];j++)
        {
            int x;
            cin>>x;
            a=max(a,x-j+1);
        }
        v.push_back(II(a,i));
    }
    sort(v.begin(),v.end());
    int ans=0;
    int p=0;
    for (auto val:v)
    {
        int pos=val.se;
        ans=max(ans,val.fi+1-p);
        p+=sl[pos];
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
