#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int n,d=0,i,d1=0,vt;
string s;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>s;
    if (s!="0")
    {

    if (s[0]=='-') {d=d+1;}
    else {d1=d1+1;}
}
}
cout<<d<<" "<<d1<<endl;
}
