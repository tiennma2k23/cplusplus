#include<bits/stdc++.h>
using namespace std;
bool doixung(string s)
{
    for (int i=0; i<=s.length()/2; i++)
        if (s[i]!=s[s.length()-i-1])
            return false;
    return true;
}
int main()
{
    string s,s1;
    int i,n,l,r;
cin>>s;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>l>>r;
    s1=s.substr(l-1,r-l+1);
    if (doixung(s1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
