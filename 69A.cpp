#include<iostream>
using namespace std;
int main()
{
    long long int i,n,t1=0,t2=0,t3=0,a[10000],b[10000],c[10000];
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>a[i]>>b[i]>>c[i];
    t1=t1+a[i];t2=t2+b[i];t3=t3+c[i];
}
if (t1==0&&t2==0&&t3==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
