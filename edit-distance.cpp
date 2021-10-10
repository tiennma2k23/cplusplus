#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5005,inf=1e9+1;;
int f[maxn][maxn];
int32_t main()
{
    string s1,s2;
    cin>>s1>>s2;
     for (int i=0;i<=s1.length();i++)
        for (int j=0;j<=s2.length();j++) f[i][j]=inf;
        f[0][0]=0;
    for (int i=0;i<=s1.length();i++)
        for (int j=0;j<=s2.length();j++)
    {
        if (i!=0) f[i][j]=min(f[i][j],f[i-1][j]+1);
        if (j!=0) f[i][j]=min(f[i][j],f[i][j-1]+1);
        if (i!=0&&j!=0)
        {
            f[i][j]=min(f[i][j],1ll*(f[i-1][j-1]+(s1[i-1]!=s2[j-1])));
        }
    }
    cout<<f[s1.length()][s2.length()]<<endl;
}
