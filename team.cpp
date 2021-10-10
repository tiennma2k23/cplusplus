#include<iostream>
using namespace std;
int main()
{
    long long n,a[1000000],b[10000000],i,j,tg,kq=0;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i]>>b[i];
    for (i=1;i<=n-1;i++)
        for (j=i+1;j<=n;j++)
    {
        if (a[i]>a[j])
        {
            tg=a[i];a[i]=a[j];a[j]=tg;
            tg=b[i];b[i]=b[j];b[j]=tg;
        }
    }
    //for (i=1;i<=n;i++) cout<<a[i]<<" "<<b[i]<<endl;
    for (i=1;i<=n;i++)
    {
        kq=kq+min(a[i],b[i]);
        cout<<kq<<endl;
    }
}
