#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    long long int i,n,dcc=0,ddt=0,j;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>s;
    for (j=0;j<s.length();j++) {
            if (s[j]=='+') dcc++;
            else if (s[j]=='-') ddt++;
                                }
}
cout<<dcc/2-ddt/2<<endl;
}
