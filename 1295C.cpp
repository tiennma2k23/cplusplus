
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s,t;
    cin>>s>>t;
    set<int> pos[1000];
    for (int i=0;i<s.length();i++) pos[s[i]].insert(i);
    int vt=-1,ans=1;
    for (int i=0;i<t.length();i++)
    {
        if (pos[t[i]].empty())
        {
            cout<<-1<<endl;
            return;
        }
        auto it=pos[t[i]].upper_bound(vt);
        if (it==pos[t[i]].end())
        {
            vt=-1;
            i--;
            ans++;
        }
        else vt=*it;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
