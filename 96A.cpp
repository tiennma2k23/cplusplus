#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int d,kt=0,i;
string s;
cin>>s;
d=1;
for (i=1;i<s.length();i++)
{
    if (s[i]==s[i-1]) d++;
    else d=1;
    if (d>=7) {cout<<"YES"<<endl;kt=1;break;}
}
if (kt==0) cout<<"NO"<<endl;
}
