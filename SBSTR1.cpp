#include<iostream>
#include<cstring>
using namespace std;
int main()
{
string s,s1;int kq;
for (int i=1;i<=24;i++)
{
cin>>s>>s1;
kq=s.find(s1,0);
if (kq!=-1) cout<<"1"<<endl; else cout<<"0"<<endl;
}
}
