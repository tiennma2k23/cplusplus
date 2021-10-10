#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10000],b[10000],max1=-1000000000000,t=0,n,i;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        t=t-a[i]+b[i];
        max1=max(max1,t);
    }
    cout<<max1<<endl;
}
