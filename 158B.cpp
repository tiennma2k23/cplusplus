#include<iostream>
using namespace std;
int main()
{
    long long int i,n,t=0,a[100000];
cin>>n;
for (i=1;i<=n;i++) {cin>>a[i];t=t+a[i];}
if (t%4==0) cout<<t/4<<endl;
else cout<<t/4+1<<endl;
}
