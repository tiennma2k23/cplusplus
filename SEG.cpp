#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    long long int i;
    cin>>s;
    for (i=0;i<s.length();i++) s1=s1+' '+s[i];
    s1=s1+' ';
    for (i=0;i<s1.length();i++) if (s1[i-1]=='>'&&s1[i+1]=='<' ) s1[i]='0';
    if (s1[1]=='<') s1[0]='0';
    if (s1[s1.length()-2]=='>') s1[s1.length()-1]='0';
    cout<<s1<<endl;
}
