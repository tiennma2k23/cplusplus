
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define se second
#define fi first
using namespace std;
const int maxn=1e5+1,inf=1e18;
II a[maxn];
int n;
vector<int> v;
bool cmp(II a,II b)
{
    int t1=max(a.se-a.fi,0ll)+max(a.se+b.se-b.fi,0ll);
    int t2=max(b.se-b.fi,0ll)+max(a.se+b.se-a.fi,0ll);
    return t1<t2;
}
void sub1()
{
    int kq=inf;
    for (int i=1;i<=n;i++) v.push_back(i);
    do {
            int t=0,ans=0;
        for (auto val:v)
        {
             t+=a[val].se;
            ans+=(max(t-a[val].fi,0ll));
        }
        int res=(ans/n)+(ans%n!=0);
        kq=min(kq,res);
    } while (next_permutation(v.begin(),v.end()));
    cout<<kq<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i].fi>>a[i].se;
    if (n<=11) sub1();
    else
    {
        int ans=0,t=0;
        sort(a+1,a+1+n,cmp);
        for (int i=1;i<=n;i++)
        {
            t+=a[i].se;
            ans+=max(t-a[i].fi,0ll);
        }
        int kq=(ans/n)+(ans%n!=0);
        cout<<kq<<endl;
    }
}
