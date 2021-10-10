
#include<bits/stdc++.h>
using namespace std;
bool ck[300];
bool ok(string s)
{
    for (char ch='a';ch<='z';ch++) ck[ch]=false;
    if (s.length()%2!=0) return false;
    for (int i=0;i<s.length()/2;i++) ck[s[i]]=1;
    for (int i=s.length()/2;i<s.length();i++)
    {
        if (!ck[s[i]]) return false;
    }
    return true;
}

int32_t main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        if (ok(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
