#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,min1,max1,a,b,i,k;
cin>>t;
while (t--)
{
    cin>>n;
    min1=1000000000000;max1=-100;k=0;
    for (i=1;i<=n;i++)
    {
        cin>>a>>b;
        min1=min(min1,b);
        max1=max(max1,a);
    }
    cout<<max(k,max1-min1)<<endl;
}
}
