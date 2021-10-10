#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    long long i,n,dem;
    char ch;
    cin>>n;
    n++;
    while (n--){
    getline(cin,s);
    s1="";
    for (i=0;i<s.length();i++)
    {
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            if (s1=="") ch=toupper(s[i]);
            else ch =tolower(s[i]);
            s1=s1+ch;
        }
        else
        {
            if (s1!="") cout<<s1<<" ";
            s1="";
        }
    }
    if (s1!="") cout<<s1<<endl;
    }
}
