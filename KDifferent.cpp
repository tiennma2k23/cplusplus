#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int i,d[5100],j,ans=0;
    int k;
    freopen("KDifferent.INP","r",stdin);
    freopen("KDifferent.OUT","w",stdout);
    getline(cin,s);
    k=int(s[0]-48);
    s.erase(0,1);
    for (i=0;i<s.length();i++)
    {
        for (j=int(s[i]);j>=int(s[i])-k;j--) d[int(s[i])]=max(d[int(s[i])],d[j]+1);
        for (j=int(s[i])+1;j<=int(s[i])+k;j++) d[int(s[i])]=max(d[int(s[i])],d[j]+1);
        ans=max(ans,d[int(s[i])]);
    }
    cout<<ans<<endl;
}
