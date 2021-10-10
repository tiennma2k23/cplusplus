#include<bits/stdc++.h>
using namespace std;
int f[2005][2005];
int32_t main()
{
    string s,s1;
    cin>>s>>s1;
    s=' '+s;
    s1=' '+s1;
    f[0][0]=0;
    for (int i=1;i<s.length();i++)
    {
        for (int j=1;j<s1.length();j++)
        {
            f[i][j]=max(f[i][j],f[i-1][j]);
            f[i][j]=max(f[i][j-1],f[i][j]);
            if (s[i]==s1[j]) f[i][j]=max(f[i][j],f[i-1][j-1]+1);
        }
    }
    cout<<f[s.length()-1][s1.length()-1]<<endl;
}
