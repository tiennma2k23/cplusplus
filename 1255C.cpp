#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int d=0,dem[100000],p[100000],i,n,m1,m2,m,x,y,z;
cin>>n;
for (i=1;i<=n-2;i++)
{
    cin>>x>>y>>z;
    m=dem[x],m1=dem[y],m2=dem[z];
    dem[x]++;dem[y]++;dem[z]++;
    if (dem[x]>2*m) {d++;p[d]=x;}
    if (dem[y]>2*m1) {d++;p[d]=y;}
    if (dem[z]>2*m2) {d++;p[d]=z;}
    //cout<<m<<" "<<m1<<" "<<m2;
}
for (i=1;i<=d;i++) cout<<p[i]<<" ";
}
