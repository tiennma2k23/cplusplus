#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,j,t;
    cin>>t;
    for (j=1;j<=t;j++)
    {
    cin>>n;
    float kq=0.0; float gt=1.0;
    for (i=1;i<=n;i++)
    {   gt=gt*i;
        kq=(float)(sqrt(kq+gt));
    }
    cout.precision(10);
    cout<<fixed<<kq<<endl;
    }
}
