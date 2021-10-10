#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("BSTRING.inp","r",stdin);
    freopen("BSTRING.out","w",stdout);
    string s;
    long long i,d=0,d1=0,n,k0=0,dem0=0,k1=0,dem1=0;
    cin>>n;
    cin>>s;
    for (i=0;i<s.length();i++)
    {
        if (s[i]=='1') dem1++;
        else dem0++;
    }
    for (i=0;i<dem1;i++) if (s[i]=='0') d1++;
    for (i=0;i<dem0;i++) if (s[i]=='1') d++;
    cout<<min(d,d1)<<endl;
}
