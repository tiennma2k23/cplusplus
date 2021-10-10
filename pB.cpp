#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
   long long x1,y1,z1,x2,y2,z2,x3,y3,z3;
   cin >> t;
   while(t--){
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3 ;
    double a=0,b=0,c=0,d=0,e=0,f=0,bc,s;
    a=x2-x1;
    b=y2-y1;
    c=z2-z1;
    d=x3-x2;
    e=y3-y2;
    f=z3-z2;
    cout.precision(2);
    s=sqrt((b*f-e*c)*(b*f-e*c)+(c*d-a*f)*(c*d-a*f)+(a*e-b*d)*(a*e-b*d))/2;
    bc=sqrt((d*d+e*e+f*f));
   cout << fixed << 2*s/bc << endl;
   }
}
