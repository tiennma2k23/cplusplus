#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long double n,m,h,w,t=0,s1,s2;
   cin>>n>>m>>h>>w;
   m=m/1000000;n=n/1000000;h=h/1000000;w=w/1000000;
   s1=m*n;s2=h*w;
   while (s1>s2)
   {
      t=t+1;
      s1=s1/2;
   }
cout<<t<<endl;
}
