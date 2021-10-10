#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,d=0;
    string s;
    cin>>s;
    for (i=0;i<s.length();i++) if ((int(s[i])>=97)&&(int(s[i])<=122)) d++;
    for (i=0;i<s.length();i++)
    {
        if (d<s.length()-d) s[i]=toupper(s[i]);
        else s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
}
