#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
unsigned long long  n,j,i,dem,d1,d2,d3,d,z,demq,l,t;int h;
unsigned long long mang[100000000],k[100000000],k2[63],k3[63],k5[63];

k2[0]=1;d=1;k[1]=1;
for (i=1;i<=63;i++)
{
    d1=d1+1;
    k2[d1]=k2[d1-1]*2;
    d=d+1;k[d]=k2[d1];
}
k3[0]=1;
for (i=1;i<=39;i++)
{
    d2=d2+1;
    k3[d2]=k3[d2-1]*3;d=d+1;k[d]=k3[d2];
}
k5[0]=1;
for (i=1;i<=24;i++)
{
    d3=d3+1;
    k5[d3]=k5[d3-1]*5;d=d+1;k[d]=k5[d3];
}
for (i=1;i<=d1;i++){
    for (j=1;j<=d2;j++)
    {if ((k2[i]<=1000000000) && (k3[j]<=1000000000)) {d=d+1;k[d]=k2[i]*k3[j];}}
                    }
for (i=1;i<=d2;i++){
    for (j=1;j<=d3;j++)
    {if ((k3[i]<=1000000000) && (k5[j]<=1000000000)) {d=d+1;k[d]=k3[i]*k5[j];}}
                    }
for (i=1;i<=d1;i++){
    for (j=1;j<=d3;j++)
    {if ((k2[i]<=1000000000) && (k5[j]<=1000000000)) {d=d+1;k[d]=k2[i]*k5[j];}}
                    }
for (i=1;i<=d1;i++)
{
    for (j=1;j<=d2;j++)
    {
        for (z=1;z<=d3;z++)
        {
            if ((k2[i]<=1000000) &&(k3[j]<=1000000) &&(k5[z]<=1000000)){d=d+1;k[d]=k2[i]*k3[j]*k5[z];}
        }
    }
}
sort(k+1,k+1+d);
dem=1;mang[1]=k[1];
for (i=2;i<=d;i++) {if (k[i]>k[i-1]) {dem=dem+1;mang[dem]=k[i];}}
//for (i=1;i<=dem;i++) cout<<mang[i]<<endl;
cin>>t;
for (j=1;j<=t;j++)
{
cin>>n;
i=1;h=0;demq=0;
while ((i<=dem)&&(mang[i]<=n)&&(demq==0))
{
    if (mang[i]==n) {demq=1;l=i;h=1;}
    i=i+1;
}
if (h==0) {cout<<"Not in sequence"<<endl;} else {cout<<l<<endl;}
}
}
