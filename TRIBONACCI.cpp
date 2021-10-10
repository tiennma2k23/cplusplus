#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned long long int a1,a,a2,f[100000],d=4,a3,i,t,n;
//freopen("vao.inp","r",stdin);
//freopen("ra.out","w",stdout);
a1=0;a2=0;a3=1;a=1;f[1]=0;f[2]=0;f[3]=1;
while (a<=1000000000)
{
    a=a1+a2+a3;
    a1=a2;a2=a3;a3=a;
    f[d++]=a;
}
while (cin>>n)
{
    for (i=1;i<=d;i++) if (f[i]>=n){cout<<f[i]<<endl;break;}
}
}
