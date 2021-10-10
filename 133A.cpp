#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int d=0,i;
cin>>s;
for (i=0;i<s.length();i++) if (s[i]=='H'||s[i]=='Q'||s[i]=='9') d++;
if(d>=1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
