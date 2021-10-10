#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long double n,m,h,w,t=0,n1,m1,h1,w1;
   cin>>n>>m>>h>>w;
   n1=max(n,m);
   m1=min(n,m);
   h1=max(h,w);
   w1=min(h,w);
   while(n1>w1){t++;
    n1=n1/2;

   }
   while(m1>h1){t++;
    m1=m1/2;

   }
  cout<<t<<endl;

}
