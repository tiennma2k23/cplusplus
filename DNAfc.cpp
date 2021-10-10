#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    string s;
    int n;
    cin>>s;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        string s1;
        cin>>s1;
        int cnt=0;
        if (s.length()!=s1.length()) continue;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]!=s1[i]) cnt++;
            if (cnt>2) break;
        }
        if (cnt<=2) cout<<i<<" ";
    }
}
