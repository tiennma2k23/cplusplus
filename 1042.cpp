#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[5],i,b[5];
    for (i=1;i<=3;i++) {cin>>a[i];b[i]=a[i];}
    sort(a+1,a+1+3);
    for (i=1;i<=3;i++) cout<<a[i]<<endl;
    cout<<endl;
    for (i=1;i<=3;i++) cout<<b[i]<<endl;
}
