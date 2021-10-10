#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    multiset <string> st;
    vector<string> gr[1000];
    ll dem[1000];
    ll n,q;
    cin>>n>>q;
    while (n--)
    {
        string s;
        cin>>s;
        st.insert(s);
        for (ll i=0;i<s.length();i++)
        {
            dem[s[i]]++;
            if (dem[s[i]]==1) gr[s[i]].push_back(s);
        }
        for (ll i=0;i<s.length();i++) dem[s[i]]=0;
    }
    while (q--)
    {
        char ch;
        cin>>ch;
        for (auto s:gr[ch]) st.erase(s);
        cout<<st.size()<<endl;
        gr[ch].clear();
    }
    for (char ch='a';ch<='z';ch++) gr[ch].clear();
}
