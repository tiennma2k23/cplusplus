#include<iostream>
using namespace std;
int main()
{
long long int i,dem[100000],d=0;
string s;
cin>>s;
for (i=0;i<s.length();i++)
{
    dem[int(s[i])]++;
    if (dem[int(s[i])]==1) d++;
}
if (d%2==0) cout<<"CHAT WITH HER!"<<endl;
else cout<<"IGNORE HIM!"<<endl;
}
