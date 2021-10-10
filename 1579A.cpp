#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int d[4];
        d[0]=d[1]=d[2]=0;
        string s;
        cin>>s;
        for (int i=0;i<s.length();i++) d[s[i]-'A']++;
        if (d[1]==d[2]+d[0]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
