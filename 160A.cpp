#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,n,a[100000],t=0,t1=0,d=0;
cin>>n;
for (i=1;i<=n;i++) {cin>>a[i];t=t+a[i];}
sort (a+1,a+1+n);
for (i=n;i>=1;i--)
{
   t1=t1+a[i];
   d++;
   if (t1>t-t1){break;}
}
cout<<d<<endl;
}
