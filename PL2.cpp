#include<iostream>
#include<string>
using namespace std;
int dd(string s,char s1 ,int k)
{
    int dd1,i,j,n;
    n=s.length();
    dd1=1;
    i=k-1;
    j=k+1;
    while ((i>=0)&&(j<n)&&(s[i]==s[j]))
    {
        dd1+=2;
        i--;j++;
    }
    return dd1;
}
int dd2(string s,string s1 ,int k)
{
    int dd1,i,j,n;
    n=s.length();
    dd1=2;
    i=k-1;
    j=k+2;
    while ((i>=0)&&(j<n)&&(s[i]==s[j]))
    {
        dd1+=2;
        i--;j++;
    }
    return dd1;
}
int main()
{
string s;
int i,n,max1=-5000;
cin>>n;
cin>>s;
for (i=0;i<n;i++) max1=max(max1,dd(s,s[i],i));
for (i=0;i<n;i++) {max1=max(max1,dd2(s,s.substr(i,2),i));}
cout<<s.length()-max1;
}
