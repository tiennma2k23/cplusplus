#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool kt;
    long long d[10000],i,dem=0,n;
    cin>>n;
    cin>>s;
    kt=true;
    for (i=0;i<s.length();i++)
    {
        d[s[i]-'0']++;
        if (d[s[i]-'0']==1) dem++;
        //cout<<dem<<endl;
        if (s[i]==s[i-1]) {kt=false;break;}
    }
    if (kt&&dem>=5) cout<<1<<endl;
    else cout<<0<<endl;
}
