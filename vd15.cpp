#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int n,i,t,j;
    cin>>t;
    for (j=1;j<=t;j++)
    {
    float x;
    cin>>x;cin>>n;
    float kq=0.0;
    for (i=1;i<=n;i++)
    {
        kq=sqrt(pow(x,i)+kq);
    }
    cout.precision(5);
    cout<<fixed<<kq<<endl;
    }
}
