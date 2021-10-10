#include<iostream>
using namespace std;
int main()
{
    long int k,d,n,a[10000],t,i;
    float dtb;
cin>>k;
while (k--)
{
    cin>>n;
    t=0;d=0;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        t=t+a[i];
    }
    dtb=t/n;
    for (i=1;i<=n;i++) if (a[i]>dtb) d++;
    cout.precision(3);
    cout<<fixed<<(float)((float)(d)/(float)(n))*100<<"%"<<endl;
}
}
