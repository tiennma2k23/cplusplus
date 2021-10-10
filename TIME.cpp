#include<iostream>
using namespace std;
int main()
{
long long int i,t,x,y,k,j,n,x1,y1,t1,k1,max1,max2,j1,x2;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>x>>y>>k>>t;
    x1=x;y1=y;k1=k;t1=t;
    if (y==1) cout<<x+t<<endl;
    else
    {
    j=1;
    while (y*j<x) j++;
    x=y*j;k--;
    if (k<=t) {max1=x+k*y+(t-k);}
    else max1=x+y*t;
    j1=0;
    while (j1*y1+1<x1) j1++;x2=j1*y1+1;t1=t1-(x2-x1);x1=x2;
    //while ((x1%y1!=1)&&(t1>0)) {x1=x1+1;t1--;}
    j1=1;
    while (y1*j1<x1) j1++;
    x1=y1*j1;k1--;
    if (k1<=t1) {max2=x1+k1*y1+(t1-k1);}
    else max2=x1+y1*t1;
    cout<<max(max1,max2)<<endl;
}
}
}
