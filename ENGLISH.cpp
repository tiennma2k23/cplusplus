
#include<bits/stdc++.h>
using namespace std;
int main()
{
   // #define double float
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double t=a+b+c+d;
    t=t/4;
    double tmp1=t-(int)(t);
    if (tmp1<0.5)
    {
        if (tmp1<0.25) t=(double)((int)(t));
        else t=(double)((int)(t))+0.5;
    }
    else if (tmp1>0.5)
    {
        if (tmp1<0.75) t=(double)((int)(t))+0.5;
        else t=(double)((int)(t))+1;
    }
    cout<<t;
    if (t==(int)(t)) cout<<".0";
    if (4.0<=t&&t<=5.0) cout<<" B1"<<endl;
    else if (5.5<=t&&t<=6.5) cout<<" B2"<<endl;
    else if (7.0<=t&&t<=8.0) cout<<" C1"<<endl;
    else if (t>8.0) cout<<" C2"<<endl;
}
