#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+1,mod=1e9+7;
int f[maxn];
int32_t main()
{
    string s;
    cin>>s;
    string s1=" chokudai";
    for (int i=0;i<s.length();i++)
    {
        for (int j=1;j<s1.length();j++) if (s1[j]==s[i]) {
                if (s[i]=='c') f[s[i]]+=1;
                else f[s[i]]+=f[s1[j-1]];
                f[s[i]]%=mod;
        }
    }
    cout<<f[s1[s1.length()-1]]<<endl;
}
