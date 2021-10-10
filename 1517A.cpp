#include<bits/stdc++.h>
#define int long long
using namespace std;
set<int> s;
void create()
{
    int tmp=2050;
    s.insert(tmp);
    for (int i=1;i<=14;i++)
    {
        tmp*=10;
        s.insert(tmp);
    }
}

void solve()
{
    int n;
    cin>>n;
    if (n%2050!=0)
    {
        cout<<-1<<endl;
        return;
    }
    int ans=0;
    while (n>0)
    {
        ans++;
        auto it=s.upper_bound(n);
        it--;
        n-=*it;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    create();
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
