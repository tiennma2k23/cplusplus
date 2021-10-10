#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long double n,m,h,w,t1=0,n1,m1,h1,w1,t2=0,t3=0,t4=0,min1,min2,t,n2,m2;
   cin>>n>>m>>h>>w;
   n1=max(n,m);
   m1=min(n,m);
   h1=max(h,w);
   w1=min(h,w);
   m2=m1;n2=n1;
   while(n2>h1)
    {
    t1++;
    n2=n2/2;
    }
   while(m2>w1)
    {
    t2++;
    m2=m2/2;
    }
    min1=t1+t2;
    while(m1>h1)
    {
    t3++;
    m1=m1/2;

   }
   while(n1>w1)
    {
    t4++;
    n1=n1/2;
    }
    min2=t3+t4;
    t=min(min1,min2);
  cout<<t<<endl;

}
