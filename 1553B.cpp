
#include<bits/stdc++.h>
using namespace std;
string sub[510][510];
bool ck(int p,string s, string t)
{
    string s1="";
    for (int i=0;i<t.length();i++)
    {
        int pos=p+i;
        if (s[pos]==t[i]) s1+=s[pos];
        else break;
        string s2=s1;
        if (pos>=t.length()-s1.length()&&pos>0)
        {
            s2+=sub[pos-1][t.length()-s1.length()];
        }
        if (s2==t) return true;
    }
    return false;
}

void solve()
{
    string s,t;
    cin>>s;
    vector<int> gr[2000];
    for (int i=1;i<=200;i++) gr[i].clear();
    for (int i=0;i<s.length();i++) gr[s[i]].push_back(i);
    for (int i=0;i<=500;i++)
        for (int j=0;j<=500;j++) sub[i][j]="";
    for (int i=0;i<s.length();i++)
        for (int j=i;j>=0;j--) sub[i][i-j+1]=sub[i][i-j]+s[j];
    //for (int j=1;j<=s.length();j++) cout<<sub[s.length()-1][j]<<endl;
    cin>>t;
    for (auto pos:gr[t[0]])
    {
        //cerr<<pos<<endl;
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
    int q;
    cin>>q;
    while (q--) solve();
}
