#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,min1=100000000000000,i,a[100000];
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>a[i];
    min1=min(min1,a[i]);
}
cout<<min1<<endl;
for (i=1;i<=n;i++) if (a[i]==min1) cout<<i<<" ";
}
