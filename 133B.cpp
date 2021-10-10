#include<iostream>
using namespace std;
int main()
{
    unsigned long long int i,j,k,kq=0,mu;
    string s,s1;
cin>>s;
for (i=0;i<s.length();i++)
{
    if (s[i]=='>') s1=s1+"1000";
    else if (s[i]=='<') s1=s1+"1001";
    else if (s[i]=='+') s1=s1+"1010";
    else if (s[i]=='-') s1=s1+"1011";
    else if (s[i]=='.') s1=s1+"1100";
    else if (s[i]==',') s1=s1+"1101";
    else if (s[i]=='[') s1=s1+"1110";
    else if (s[i]==']') s1=s1+"1111";
}
for (i=0;i<s1.length();i++)
{
    k=int(s1[i])-48;
    mu=1;
    for (j=0;j<=s1.length()-i-1;j++) mu=mu*2;
    kq=(kq+(int(s1[i])-48)*mu);
}
cout<<kq%1000003<<endl;
}
