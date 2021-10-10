#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,max1=-100000000000000000,a[100000],l;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>a[i];
    if (max1<a[i]) {l=i;max1=a[i];}
}
cout<<max1<<endl;
cout<<l<<endl;
}
