#include<bits/stdc++.h>
using namespace std;
bool dx(string s)
{
    for (int i=0; i<=s.length()/2; i++)
        if (s[i]!=s[s.length()-i-1])
            return false;
    return true;
}
int main()
{
string a,b,sb,sa,s1,s2;
int i,la,j,lb;
cin>>a>>b;
i=a.length()-1;
while (i>=0)
{
    sa=a[i]+sa;
    if (dx(sa)) la=i;
    i--;
}
j=b.length()-1;
while (j>=0)
{
    sb=b[j]+sb;
    if (dx(sb)) lb=j;
    j--;
}
if (dx(a)&&dx(b)) cout<<"No Solution"<<endl;
else {
for (i=0;i<la;i++) s1=a[i]+s1;
for (i=0;i<lb;i++) s2=b[i]+s2;
if ((s1<=s2)||(s1.length()<s2.length())) cout<<s1<<endl;
else if ((s2<=s1)||(s2.length()<s1.length())) cout<<s2<<endl;}
}
