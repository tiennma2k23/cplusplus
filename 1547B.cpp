#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5;
int d[maxn],vt[maxn];

void solve()
{
    int vl=-1,vr=-1;
    string s;
    cin>>s;
    for (char ch='a';ch<='z';ch++) d[ch]=0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='a') vl=i,vr=i;
        d[s[i]]++;
    }
    if (vl==-1)
    {
        cout<<"no"<<endl;
        return;
    }
    for (char ch='a';ch<='z';ch++) if (d[ch]==2)
    {
        cout<<"no"<<endl;
        return;
    }
    for (int ch='b';ch<='z';ch++)
    {
        if (vl==0&&vr==s.length()-1) break;
        bool ck=false;
        if (vl>0)
        {
            if (s[vl-1]==ch) vl--,ck=true;
        }
        if (vr<s.length()-1)
        {
            if (s[vr+1]==ch) vr++,ck=true;
        }
        if (!ck)
        {
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
