#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,d,dem=0,mang[10000],n,j,kt=0;;
string s1;
for (j=4;j<=1000;j++)
{
    d=0;
    s1=to_string(j);
    for (i=0;i<s1.length();i++)
    {
        if (s1[i]=='4'||s1[i]=='7') d++;
        else break;
    }
    if (d==s1.length()) {dem++;mang[dem]=j;}
}
cin>>n;
for (i=1;i<=dem;i++) {if (n%mang[i]==0) {kt=1;break;}}
if (kt==1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
