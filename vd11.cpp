#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if (n==1) {
            cout.precision(10);
            cout<<fixed<<(float)(2+sqrt(2))<<endl;}
    else
    {
    float a=sqrt(2+sqrt(2));
    for (i=1;i<=n-1;i++) a=(float)(sqrt((sqrt(a)+2)));
    cout.precision(10);
    cout<<fixed<<(float)a<<endl;
}
}
