#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,n,a[100000],d,max1=-100000;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>a[i];
    if (a[i]>=a[i-1]) d++;
    else {d=1;}
    max1=max(max1,d);
}
cout<<max1<<endl;
}
