#include<bits/stdc++.h>
using namespace std;
set<int> posl[2000],posc[2000];
bool ck(int pos, string s, string t)
{
    int pos1=pos;
    for (int i=1; i<t.length(); i++)
    {
        if (pos%2==0)
        {
            auto it=posl[t[i]].upper_bound(pos);
            if (it==posl[t[i]].end()) return false;
            else pos=*it;
        }
        else
        {
            auto it=posc[t[i]].upper_bound(pos);
            if (it==posc[t[i]].end()) return false;
            else pos=*it;
        }
    }
    if ((s.length()-pos+1)%2==0) return true;
    return false;
}

void solve()
{
    for (int i=0; i<=200; i++) posc[i].clear(),posl[i].clear();
    string s,t;
    cin>>s>>t;
    for (int i=0; i<s.length(); i++)
    {
        if (i%2==0) posc[s[i]].insert(i);
        else posl[s[i]].insert(i);
    }
    int pos;
    if (posc[t[0]].size())
    {
        pos=*posc[t[0]].begin();
        if (ck(pos,s,t))
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    if (posl[t[0]].size())
    {
        pos=*posl[t[0]].begin();
        if (ck(pos,s,t))
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int32_t main()
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
