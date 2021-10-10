#include<iostream>
using namespace std;
int main()
{
long long int a,d,i;
string s,s1;
cin>>s;
s1="hello";
a=0;d=0;
for (i=0;i<s.length();i++)
{
    if (s[i]==s1[a])
    {
        a++;d++;
    }
}
if (d==5) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
