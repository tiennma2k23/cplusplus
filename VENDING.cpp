#include<iostream>
using namespace std;
int main()
{
freopen ("VENDING.inp","r",stdin);
freopen ("VENDING.out","w",stdout);
long int n,i,a[10100],d=0,t;
cin>>n;
for (i=1;i<=n;i++) cin>>a[i];
t=0;
for (i=0;i<n;i++)
{
    if (t+1<a[i+1]) {t=t+a[i];d=1;break;}
    else t=t+a[i+1];
}
if (d==0) cout<<t+1<<endl;
else cout<<t-a[i]+1<<endl;
}

