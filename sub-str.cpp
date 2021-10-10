#include<bits/stdc++.h>
using namespace std;

bool ok(int x, string s, string s1)
{
    for (int i=x;i<x+s1.length();i++) if (s[i]!=s1[i-x]) return false;
    return true;
}

int32_t main()
{
    string x,y;
    cin>>x>>y;
    int sz=x.length();
    x+=x;
    for (int i=0;i<sz;i++) if (ok(i,x,y)) cout<<i+1<<" ";
}
