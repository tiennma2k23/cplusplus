#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,k,i,l,a[500100],m;
cin>>n>>k;
for (i=1;i<=n;i++)
{
    cin>>a[i];
}
sort(a+1,a+1+n);
l=0;
cout<<max(l,a[n]-a[1]-2*k)<<endl;
}
