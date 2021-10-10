#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e6;

    long long t[2*MAXN],ans[2*MAXN],i,k,d=0;
int main()
{
    //freopen("FOUNDSTRING.inp","r",stdin);
    //freopen("FOUNDSTRING.out","w",stdout);
    string s,p;
    cin>>p>>s;
    s='*'+s;
    s=p+s;
    s=' '+s;
    t[1]=0;
    for (i=2;i<s.length();i++)
    {
        k=t[i-1];
        while (s[i]!=s[k+1]&&k>0) k=t[k];
        if (s[i]==s[k+1]) k++;
        t[i]=k;

        if (t[i]==p.length())
        {
            d++;
            ans[d]=i-p.length()+1-p.length()-1;
        }
    }
    cout<<d<<endl;
    for (i=1;i<=d;i++) cout<<ans[i]<<" ";
}
