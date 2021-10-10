#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+1;
int f[maxn][2];
int32_t main()
{
    string s;
    cin>>s;
    int sz=s.length();
    s=' '+s;
    for (int i=1;i<=sz;i++)
    {
        if (s[i]=='A')
        {
            f[i][0]=min(f[i-1][0],f[i-1][1]+1);
            f[i][1]=min(f[i-1][1]+1,f[i-1][0]+1);
        }
        else
        {
            f[i][0]=min(f[i-1][0]+1,f[i-1][1]+1);
            f[i][1]=min(f[i-1][1],f[i-1][0]+1);
        }
    }
    cout<<f[sz][0]<<endl;
}
