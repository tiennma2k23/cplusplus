#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int mang[100000],i,d=0;
string s;
cin>>s;
for (i=0;i<s.length();i++)
{
    if ((int(s[i])>=48)&&(int(s[i])<=57)) {d++;mang[d]=int(s[i])-48;}
}
sort(mang+1,mang+1+d);
cout<<mang[1];
for (i=2;i<=d;i++) cout<<"+"<<mang[i];
}
