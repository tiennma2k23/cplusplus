#include<iostream>
using namespace std;
int main ()
{
    double i, n;
    cin>>n;
    double s=0;
    for(i=1;i<=n;i++)
    s=s+(double)((2*i+1)/(2*i+2));
    cout.precision(5);
    cout<<fixed<<s<<endl;
}
