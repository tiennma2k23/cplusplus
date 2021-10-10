#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,t=0,a[100000];
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>a[i];
    if (abs(a[i])%2==1) t=t+a[i];
}
cout<<t<<endl;
}
