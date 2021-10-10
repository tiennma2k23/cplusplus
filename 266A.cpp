#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d=0,i;
    string s;
cin>>n;
cin>>s;
for (i=0;i<n-1;i++) if (s[i]==s[i+1]) d++;
cout<<d<<endl;
}
