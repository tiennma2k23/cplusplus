#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,k,i,d=0;string s,s1,s2;
cin>>n;
cin>>s;
k=n/2;
for (i=0;i<k;i++) s1=s[i]+s1;
if (n%2==1) k=k+1;
for (i=k;i<n;i++) s2=s2+s[i];
//cout<<s1<<" "<<s2;
for (i=0;i<=s1.length();i++) if (s1[i]!=s2[i]) d=d+2;
if (d==n) cout<<d-1<<endl;
else cout<<d<<endl;
}
