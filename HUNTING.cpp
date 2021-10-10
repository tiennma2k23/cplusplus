#include<iostream>
using namespace std;
int main()
{
    int m,n,a[101][101],i,j,max1,max2,vt1[10000],vt2[10000],d=0,d1=0;
cin>>m>>n;
for (i=1;i<=m;i++)
    for (j=1;j<=n;j++) cin>>a[i][j];
    max1=a[1][1];max2=a[1][1];
for (i=1;i<=n;i++) if (max1<=a[1][i]) {max1=a[1][i];}
for (i=1;i<=n;i++)
{
    if ((a[1][i]!=max1)&&(max2<=a[1][i])) {max2=a[1][i];d1++;vt2[d1]=i;}
}
for (i=1;i<=n;i++) {if (a[1][i]==max1) {d++;vt1[d]=i;}
                    else if (a[1][i]==max2) {d1++;vt2[d1]=i;}}
for (i=1;i<=d;i++) cout<<vt1[i]<<endl;
for (i=1;i<=d1;i++) cout<<vt2[i]<<endl;
}
