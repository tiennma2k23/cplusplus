
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    double x,y,ans[5];
    cin>>x>>y;
    double s=x+y;
    double c=y*y-x*x;
    double b=-2*s;
    double delta=b*b-4*c;
    delta=sqrt(delta);
    double x1=(-b-delta)/2;
    double x2=(-b+delta)/2;
    if (x1<x2) swap(x1,x2);
    ans[1]=x2;
    ans[3]=x+ans[1];
    ans[2]=sqrt(ans[3]*ans[3]-ans[1]*ans[1]);
    sort(ans+1,ans+4);
    cout<<setprecision(9)<<fixed<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
}

