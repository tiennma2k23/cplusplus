#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long int m,l1,l2,l3,kq,bcnn1;
    while (cin>>m>>l1>>l2>>l3)
    {

        bcnn1=(l1*l2)/(__gcd(l1,l2));
        kq=(bcnn1*l3)/(__gcd(bcnn1,l3));
        cout<<kq-m<<endl;
    }
}
