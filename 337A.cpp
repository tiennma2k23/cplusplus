#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int m,n,a[100000],min1=1000000000,i;
cin>>n>>m;
for (i=1;i<=m;i++) cin>>a[i];
sort(a+1,a+1+m);
for (i=n;i<=m;i++) min1=min(min1,a[i]-a[i-n+1]);
cout<<min1<<endl;
}
