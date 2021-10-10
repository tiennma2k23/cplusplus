#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> ans;
void create(int s, int n)
{
    if (n==1)
    {
        ans.push_back(s);
        return;
    }
    int val=1,tmp=s;
    while (tmp)
    {
        val*=10;
        tmp/=10;
    }
    while (s-val<n-1) val/=10;
    ans.push_back(val);
    create(s-val,n-1);
}

void solve()
{
    int s,n;
    cin>>s>>n;
    create(s,n);
    for (auto val:ans) cout<<val<<" ";
    cout<<endl;
    ans.clear();
}
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
