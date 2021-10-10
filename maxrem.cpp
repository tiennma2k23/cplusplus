#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long int i,n,a[100010],dem;
cin>>n;
for (i=1;i<=n;i++) cin>>a[i];
sort (a+1,a+n+1);
i=n;
dem=0;
while ((i>=1) && (dem==0))
{
    if (a[i]!=a[n]) {cout<<a[i];dem=1;}
    i--;
}
if (dem==0) cout<<0;
}
