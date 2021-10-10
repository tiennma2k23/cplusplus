#include<bits/stdc++.h>
using namespace std;
int main()
{
string s[1000];
int n,i,j;
cin>>n;
for (i=1;i<=n;i++) cin>>s[i];
sort(s+1,s+n+1);
//for (i=1;i<=n-1;i++)
    //for (j=i+1;j<=n;j++) if (s[i]>s[j]) swap(s[i],s[j]);
    for (i=1;i<=n;i++) cout<<s[i]<<" ";
}
