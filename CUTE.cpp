#include<iostream>
#include<cmath>
unsigned long long int soNguyenTo(unsigned long long int soA)
{
    if (soA < 2)
        return 0;

    for (int i = 2; i <= sqrt(soA); i ++)
    {
        if (soA%i==0)
        {
            return 0;
        }
    }
    return 1;
}
unsigned long long int tcs(unsigned long long int soA)
{
    unsigned long long int t=0;
    while (soA>0)
    {
        t=t+soA%10;
        soA=(soA-soA%10)/10;
    }
    return t;
}
unsigned long long int tbp(unsigned long long int soA)
{
    unsigned long long int t=0;
    while (soA>0)
    {
        t=t+(soA%10)*(soA%10);
        soA=(soA-soA%10)/10;
    }
    return t;
}
using namespace std;
int main()
{
    unsigned long long int t1,j,a,b,d,i;
cin>>t1;
for (i=1;i<=t1;i++)
{
    cin>>a>>b;d=0;
    for (j=a;j<=b;j++) {if ((soNguyenTo(tbp(j))==1)&&(soNguyenTo(tcs(j))==1)) d++;}
    cout<<d<<endl;
}
}
