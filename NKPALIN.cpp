#include<bits/stdc++.h>
using namespace std;
const long long maxn=2000;
long long f[maxn+5][maxn+5];
int main()
{
    string s,s1="",ans="";
    long long i,j,m,n;
    cin>>s;
    s1=s;
    reverse(s1.begin(),s1.end());
    m=s.length();
    n=s1.length();
    s='l'+s;
    s1='l'+s1;
    for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {
            if(s[i]==s1[j]) f[i][j]=f[i-1][j-1]+1;
            else f[i][j]=max(f[i-1][j],f[i][j-1]);
        }
    }
    while (f[m][n]>0)
    {
        if (s[m]==s1[n]) ans+=s[m],m--,n--;
        else if (f[m][n]==f[m][n-1]) n--;
        else m--;
    }
    cout<<ans<<endl;
}
