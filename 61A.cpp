#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i;
    string s,s1;
cin>>s>>s1;
for (i=0;i<s.length();i++)
{
    if (s[i]!='0'&&s[i]!='1') s=s.erase(i,1);
    if (s1[i]!='0'&&s1[i]!='1') s1=s1.erase(i,1);
}
for (i=0;i<s.length();i++) cout<<(int(s[i])+int(s1[i]))%2;
}
