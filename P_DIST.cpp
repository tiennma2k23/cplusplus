#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
 unsigned long long int hieuht(long int x)
 {
     int t=0;
     int l=int(sqrt(x));
     for (int i=1;i<=l;i++) if (x%i==0) t=t+i+x/i;
     t=t-x;
     if (x==l*l) t=t-l;
     t=abs(t-x);
     return t;
 }
 int main()
 {
     freopen("P_DIST.inp","r",stdin);
     freopen("P_DIST.out","w",stdout);
     long int a,b,i;
     unsigned long long int kq=0;
     cin>>a>>b;
     for (i=a;i<=b;i++) {kq=kq+hieuht(i);}
     cout<<kq;
}
