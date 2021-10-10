#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,n,i,d=0;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>a>>b;
    if (abs(a-b)>=2) d++;
}
cout<<d<<endl;
}
