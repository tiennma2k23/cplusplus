#include<bits/stdc++.h>
using namespace std;
bool g( string s, string s1)
{
    while (s.length()<s1.length()) s='0'+s;
    while (s1.length()<s.length()) s1='0'+s1;
    return s<s1;
}
int main()
{
    string r[13],s,tuoi;
    long long ans,i,j,slcs,n,be=0,lon=0;
    bool kt;
    cin>>n;
    r[1]="ABSINTH"; r[2]="TEQUILA";r[3]= "VODKA";
    r[4]="WHISKEY"; r[5]="WINE"; r[6]="BEER"; r[7]="BRANDY";
    r[11]="CHAMPAGNE"; r[8]="GIN"; r[9]="RUM"; r[10]="SAKE";
ans=0;
tuoi="18";
    for (i=1;i<=n;i++)
    {
        cin>>s;
        kt=false;
        for (j=1;j<=11;j++)
            if (s==r[j])
            {
                kt=true;
                ans++;
                break;
            }
        if (!kt)
        {
            slcs=0;
            for (j=0;j<s.length();j++) if (s[j]>='0'&&s[j]<='9') slcs++;
            if (slcs==s.length())
            {
                if (g(s,tuoi)) be++;
                else lon++;
            }
        }
    }
    cout<<ans+be<<endl;
}
