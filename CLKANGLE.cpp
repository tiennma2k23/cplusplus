#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,tmp,tmp1,cl;
    cin>>h>>m;
    if (h>=12) h-=12;
    tmp=0.5*(60*h+m);
    tmp1=6*m;
    cl=abs(tmp-tmp1);
    cout<<fixed<<setprecision(1)<<min(cl,360-cl)<<endl;
}
